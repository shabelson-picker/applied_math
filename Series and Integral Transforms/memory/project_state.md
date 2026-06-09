---
name: project_state
description: Current state of Series and Integral Transforms project — files, coverage, workflow
type: project
---

## Course details
- **Course**: 21183, HIT — Prof. Michael Kroyter
- **Grading**: 100% final exam
- **Syllabus file**: `Syllabus.pdf`

## Topics (by week)
1. Numerical series, necessary condition
2. Positive series: ratio, root, integral, comparison tests
3. General series: absolute/conditional, Leibniz alternating test
4. Power series & Taylor series
5. Function series, uniform convergence
6. Inner product spaces, orthonormal systems, Gram-Schmidt
7. Fourier series: norm convergence, Bessel, Parseval, Gibbs
8. Trigonometric Fourier series, Dirichlet's theorem
9. Computing sums via Fourier series
10. Sine/cosine series, differentiation & integration of Fourier series
11–12. Fourier transform, duality, convolution
13. Plancherel, inverse Fourier transform

## Files present (as of 2026-03-26)

### Lectures
- `חלק1.pdf` — Hebrew lecture notes, Part 1
- `חלק2.pdf` — Hebrew lecture notes, Part 2
- `חלק3.pdf` — Hebrew lecture notes, Part 3
- `חלק4.pdf` — Hebrew lecture notes, Part 4
- `Lecture_C_Y2 (1).pdf` — English lecture notes

### Exercises
- `SIT1.pdf` — Exercise list 1
- `SIT2.pdf` — Exercise list 2
- `SIT3.pdf` — Exercise list 3
- `SIT4.pdf` — Exercise list 4

### External Material
- `calculusSingleAndMultivariable.pdf` — main textbook
- `walker2004.pdf` — supplementary textbook

## What has been read
- `SIT1.pdf` — Exercise sheet 1: positive series (geometric, telescoping, convergence tests, convergence for x)
- `SIT1_Sol.pdf` — Full solutions for SIT1 (7 pages)
- `SIT2.pdf` — Exercise sheet 2: general series (alternating, absolute/conditional, ratio/root tests)
- `SIT3.pdf` — Exercise sheet 3: power series (radius of convergence, Taylor/Maclaurin series)
- `SIT4.pdf` — Exercise sheet 4: Taylor series applications + uniform convergence of sequences/series
- `Syllabus.pdf` — Course syllabus

## Recent sessions

### 2026-05-26
- Working on SIT4 problem 4.7 (limits via Taylor series)
- **4.7 ב** (lim d/dx [x^2 e^x / (1-cos x)]) — **answer: 2**
  - Method: cancel x^2 from numerator and denominator first → f(x) = e^x / (series with nonzero constant)
  - Expand numerator and denominator as power series, then f(x) = 2 + 2x + ... → f'(0) = a_1 = 2
- **4.7 ג** (lim d^2/dx^2 [x^2 e^x / (1-cos x)]) — **in progress**, answer is 7/3
  - Same function, need a_2: use 1/(1 - x^2/12) ≈ 1 + x^2/12 (geometric series, q = x^2/12)
  - Student got wrong answer (24), needs to recheck x^2 coefficient multiplication
- Key concepts discussed this session:
  - Order of operations: simplify f(x) as a power series FIRST, then differentiate, then take limit at 0
  - Why 1/Q(x) is analytic when Q(0) ≠ 0: write Q = Q(0)(1 - R), R(0)=0 → geometric series 1/(1-R) converges
  - Analytic vs smooth (C^∞): analytic means Taylor series converges TO the function; smooth only means derivatives exist
  - Classic non-analytic smooth example: e^(-1/x^2)
  - Denominator of (1-cos x)/x^2 has only even powers → inverse also has only even powers → no odd-power mixing

### 2026-03-30
- Covered formal proof of **Riemann's rearrangement theorem** (Part 2): conditionally convergent series can be rearranged to any sum L ∈ R.
- Proof structure: split into positive/negative parts (both diverge) → greedy construction → overshoot/undershoot → 0 since a_n → 0.
- Student asked for the full formal proof directly (not guided), which was appropriate here (theorem proof, not an exercise).

### 2026-04-25
- Completed SIT2 exercises 2.6–2.11
- 2.6: proved convergence half of d'Alembert using limsup — bound by geometric series from above
- 2.7: disproved divergence from limsup > 1 using counterexample (interleaved geometric series)
- 2.8: root test proof — divergence via necessary condition, convergence via geometric bound
- 2.9: root test applied, used n^{3/n} → 1 via L'Hôpital
- 2.10: Riemann rearrangement theorem — greedy algorithm for π/2; oscillation between finite values for broad divergence
- 2.11: Leibniz error bound |S - S_N| ≤ a_{N+1}, solved for N ≥ 99999

### 2026-04-09
- Created `theorems.tex` and `class_notes_summary.tex` (compiled to PDF) from class notes in `class notes/` directory.
- Worked on SIT2 exercise 2.2: alternating series (א conditionally convergent, ב conditionally convergent, ג diverges, ד absolutely convergent).
- Key conceptual corrections made (see feedback_teaching.md):
  - Comparison test does not apply to alternating series
  - Leibniz only proves convergence, not conditional convergence — category determined by sum |a_n|
  - Absolute and conditional convergence are mutually exclusive
  - Workflow: ratio/root on |a_n| first; Leibniz only when L=1
- Covered ordering: 1/n^(1+ε) < 1/n < 1/ln(n) and implications for divergence/convergence
- Discussed transcendental equations (c^n > n^k has no closed-form crossing point), Lambert W function (out of scope)
- SIT2 fully completed (2026-04-25): covered 2.6–2.11

## Workflow
- Student uploads PDFs → Claude reads and helps with exercises
- Student solves independently, asks for hints when stuck

**How to apply:** On session start, read this file to know what's available. Re-glob to catch new files.
