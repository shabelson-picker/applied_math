---
name: project_state
description: Current state of Infi 2 project — files, coverage, workflow
type: project
---

## Course progress (as of 2026-05-10)
Lectures 1–8+ covered. Topics worked: double integrals (order change), partial derivatives (differentiability subtleties), IFT (y'', cyclic identity), directional derivative along normals, local extrema in 3 variables.

## Files present

### Lectures
- `DT_Lect_1_Infi_2.pdf` — typed (improper integrals, topology basics)
- `DT_Lect_2_Infi_2.pdf` — typed (multivariable functions, limits)
- `DT_Lect_3_Infi_2.pdf` — typed (limits cont., topology, continuity)
- `DT_Lect_4_Infi_2.pdf` — typed (differentiability, partial derivatives)
- `DT_Lect_5_Infi_2.pdf` — typed (higher-order differentials, chain rule, directional derivative, gradient)
- `DT_Lect_6_Infi_2.pdf` — typed (higher-order partial derivatives, Schwarz/Clairaut theorem, d²f)
- `DT_Lect_7_Infi_2.pdf` — typed (Taylor polynomial for multivariable functions, local extrema necessary condition)
- `DT_Lect_8_Infi_2.pdf` — typed (sufficient condition for local extrema, Δ = AC−B², Sylvester's criterion, Hessian)
- `Infi 2 lect 3 15.03.26.pdf` — handwritten scan of Lecture 3
- `Infi 2 lect 4 18.03.26.pdf` — handwritten scan of Lecture 4
- `Lect3_latex.tex` / `Lect3_latex.pdf` — LaTeX transcription with TikZ diagrams
- `Lect4_latex.tex` / `Lect4_latex.pdf` — LaTeX transcription with TikZ diagrams

### Exercises
- `List_1.pdf`, `List_2.pdf`, `List_3.pdf`, `List_4.pdf`
- `Add_List_1.pdf`, `Add_List_3.pdf`, `Add_List_4.pdf`
- `Sol_List_1.pdf`, `Sol_Add_List_1.pdf`, `Sol_Add_List_2.pdf`

### Reference
- `theorems.md` — master theorems file, updated through session 2026-05-10; includes pitfall blocks in §3 (partial derivatives), §4 (directional derivative / normal direction), §6 (IFT: y'', failure locus, 3-var partial, cyclic identity)
- `calculusSingleAndMultivariable.pdf`, `walker2004.pdf` — textbooks

### Exercises (new)
- `exercises/worksheet_order_change.tex` / `.pdf` — self-made worksheet on changing integration order (Parts A/B/C, sourced from Reznik pp.95-96 and Hughes-Hallett §16.2)
- `exercises/diif_summary_exec.pdf` — 20-problem summary sheet on multivariable differential calculus; worked through Q4, Q6, Q9, Q11, Q13, Q14, Q15, Q16

## Workflow
- Student uploads PDFs → Claude reads and updates theorems.md
- LaTeX files compiled with pdflatex (texlive-latex-extra installed)
- Student solves exercises independently, asks for hints when stuck

**Why:** Keep this updated so future sessions don't re-scan all files from scratch.
**How to apply:** On session start, read this file to know exactly what's available.
