---
name: aofa-course
description: Self-paced Analysis of Algorithms course built around the Sedgewick-Flajolet book under sem3/data structure
metadata:
  type: project
---

Building a self-paced course around **Sedgewick & Flajolet, _An Introduction to the
Analysis of Algorithms_ (2nd ed, 2013)** — textbook PDF at
`sem3/data structure/course/textbook-aofa-sedgewick-flajolet-2e.pdf`. This is the advanced
average-case / analytic algorithm-analysis text, NOT a standard Big-O DS book.
Everything lives under `sem3/data structure/course/` (tidied — top folder holds only that).

**Motivation:** user has a data-structures class covering runtime complexity + Big-O and
wants to dive deeper into algorithmic analysis. No deadline; course-adjacent self-study;
class syllabus is unclear so the course is built around the *book's* progression.

**Structure (agreed):**
- Course lives in `sem3/data structure/course/`: `SYLLABUS.md`, `PROGRESS.md`,
  `notes/`, `problem-sets/`, `REFERENCES.md`.
- **One module per chapter** (Module 1 = Ch 1 … Module 9 = Ch 9), following the book.
- **Lazy expansions ("sub-chapters"):** don't pre-write; only create a focused expansion
  file (e.g. `notes/module-00-toolbox` for combinatorics) when we actually hit friction.
- Each module = my plain-text lecture notes (no LaTeX, see [[no-latex-explanations]]) +
  a problem set with worked solutions. Work module-by-module like [[infi2-test-prep]].

**Background calibration:** calculus (Infi 1-2) solid; **combinatorics is shallow and
rusty** (saw it in discrete math long ago) → re-teach binomial coefficients / counting /
basic discrete probability inline; open the combinatorics toolbox expansion early.

**Reference shelf** (all local in `course/references/`, catalog in `course/REFERENCES.md`):
Analytic Combinatorics (F&S, free download), CLRS 3e, TAOCP vols 1–4A, Sedgewick-Wayne
Algorithms 4e, Zingaro Algorithmic Thinking (last several supplied by user from Drive).
TAOCP vol 3 (Sorting & Searching) is the key one for Modules 6/7/9. Lazy-consult only.

**Pace & constraints:** side course on limited free time (user is busy); English is not the
user's first language and prior study was in Hebrew, so progress is deliberate. Structured
into **30–45 min sessions**; ~77 sessions total (see SYLLABUS "Pace & sessions" table).
**Chosen cadence: 3 sessions/week → ~6 months** (started 2026-07-11, projected finish ≈ Jan
2027). Session checklist lives in PROGRESS.md. **English register: keep it HIGH** — improving the
user's mathematical/professional English is an explicit course goal, so write in precise,
idiomatic academic English with proper technical vocabulary (asymptotically, monotonic,
w.l.o.g., "it suffices to show", etc.), glossing only genuinely advanced/confusable terms
briefly inline. Do NOT simplify the prose. **Hebrew only on explicit request** — do not add Hebrew glosses
proactively; when the user specifically asks for the Hebrew of a term, give it just for that
term (cf. [[hebrew-math-terms-infi2]]).

**Book exercises:** all 544 extracted per chapter in `course/exercises/`; dropped fi/fl
ligatures from PDF text extraction were repaired by a cleanup pass.

**PDF rendering:** `course/tools/` holds a vendored pipeline (marked + MathJax + mermaid,
printed by headless Chrome). Run `bash tools/render-pdfs.sh [file]` to (re)build PDFs into
`course/pdf/`. Conventions in course notes: inline math `\( … \)`, display `$$ … $$`, single
`$` literal, diagrams in ```mermaid fences. Math renders in soft grey (#565656) by user pref.

**Status (2026-07-11):** Module 0 + Module 1 notes & problem sets written **and retrofitted to
LaTeX**; all 17 course docs rendered to PDF; exercises extracted, ligature-cleaned & rendered;
pacing/session model + spaced-review set. **Module 0 done (2026-07-11); Module 1 §1–§3
read + discussed (2026-07-12)** — cost model, quicksort recurrence set-up, harmonic pop-out,
randomness preservation. Resume at Module 1 §4 (largely review; then problems P1–P7). Spaced
review now active. Build Module 2 (Recurrences) when reached — write its math in LaTeX from the start.
