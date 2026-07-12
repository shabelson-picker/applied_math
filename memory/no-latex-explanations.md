---
name: no-latex-explanations
description: User wants math explained in plain text, NOT LaTeX
metadata:
  type: feedback
---

When explaining math **in live chat / the terminal**, do NOT use LaTeX. Write formulas in
plain text (e.g. "r = 2cosφ", "√(16-x²)", "ρ²·sinθ", "∫ ... dx").

**Why:** User explicitly said "don't latex!" — they read answers in a terminal where LaTeX
source is noise, not rendered math.

**How to apply:** In chat, use unicode math symbols (√, ², ∫, ρ, φ, θ, π, ≤, ·) and plain
spacing; show step-by-step working line by line. Related to [[infi2-test-prep]].

**Scope exception — the AofA course PDFs.** This unicode-only rule is about the *terminal*.
The [[aofa-course]] written notes/problem sets are rendered to PDF (see its render pipeline),
where LaTeX typesets beautifully — so **those source files use LaTeX** (inline `\( … \)`,
display `$$ … $$`), by the user's explicit decision (2026-07-11). Live chat about the course
still uses unicode. In short: **chat = unicode, course PDFs = LaTeX.**
