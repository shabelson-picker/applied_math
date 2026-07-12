# tools/ — PDF build

Renders the course Markdown into clean PDFs under `course/pdf/`.

## Use

```bash
bash tools/render-pdfs.sh            # rebuild every PDF
bash tools/render-pdfs.sh notes/module-02-recurrences.md   # rebuild one
```

## What it does

`marked` (Markdown → HTML) → **MathJax** (LaTeX math) + **mermaid** (diagrams) →
headless **Chrome** prints to A4 PDF. Everything is vendored here so it runs offline:

- `render.mjs` — the converter (also holds the print CSS/theme)
- `mermaid.min.js`, `mathjax-tex-svg.js` — the render engines (self-contained)
- `node_modules/` — just `marked`

## Authoring conventions

- **Inline math:** `\( ... \)`   — e.g. `\(C_N = 2(N+1)(H_{N+1}-\tfrac32)\)`
- **Display math:** `$$ ... $$` (or `\[ ... \]`)
- **A single `$` is literal** (so "$10,000" is safe) — never use `$...$` for inline math.
- **Diagrams:** a ` ```mermaid ` fenced code block.

Reminder: LaTeX is for these PDF-destined source files only. Live chat stays in plain unicode
(see `memory/no-latex-explanations.md`).
