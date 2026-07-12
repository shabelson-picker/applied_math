#!/usr/bin/env bash
# Regenerate all course PDFs from the Markdown sources.
#
#   Usage:  bash tools/render-pdfs.sh            # render every *.md under course/
#           bash tools/render-pdfs.sh notes/x.md # render one file
#
# Output goes to course/pdf/, mirroring the source folder structure.
# Pipeline: marked (md -> HTML) + MathJax (LaTeX) + mermaid, printed by headless Chrome.
#   - inline math:  \( ... \)      - display math:  $$ ... $$   (single $ is literal, e.g. $10)
#   - diagrams:     ```mermaid fenced blocks
set -e

TOOL="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DIR="$(cd "$TOOL/.." && pwd)"            # the course/ directory
CHROME="$(command -v google-chrome || command -v chromium || command -v chromium-browser || true)"
if [ -z "$CHROME" ]; then echo "error: no Chrome/Chromium found on PATH" >&2; exit 1; fi

TMP="$(mktemp -d)"; trap 'rm -rf "$TMP"' EXIT
cd "$DIR"

render_one() {
  local md="$1"; local rel="${md#./}"; local out="pdf/${rel%.md}.pdf"
  mkdir -p "$(dirname "$out")"
  node "$TOOL/render.mjs" "$md" "$TMP/_r.html" "$(basename "${rel%.md}")"
  "$CHROME" --headless=new --disable-gpu --no-sandbox --hide-scrollbars \
    --user-data-dir="$TMP/chrome" --virtual-time-budget=15000 \
    --run-all-compositor-stages-before-draw --no-pdf-header-footer \
    --print-to-pdf="$out" "file://$TMP/_r.html" >/dev/null 2>&1
  echo "  ✓ $out"
}

if [ "$#" -gt 0 ]; then
  for f in "$@"; do render_one "./${f#./}"; done
else
  n=0
  while IFS= read -r md; do render_one "$md"; n=$((n+1)); done \
    < <(find . -name '*.md' -not -path './pdf/*' -not -path './tools/*' | sort)
  echo "rendered $n files -> $DIR/pdf/"
fi
