---
name: file_index
description: Content index for all infi2 PDFs — lectures, exercises, solutions, additional exercises. Use this to find the right file without reading PDFs.
type: reference
---

# Infi 2 — File Content Index

**Base path for lectures:** `.../infi2/lectures/`
**Base path for exercises:** `.../infi2/exercises/`
**Base path for additional exercises src:** `.../infi2/exercises/additional_exercises/src/`

---

## Lectures (DT_Lect_*)

| File | Topics / Sections |
|------|------------------|
| DT_Lect_1_Infi_2.pdf | **Improper integrals** (type I & II, review); linear algebra intro: R^n as normed vector space, inner product space, norms (L1, L2, L-inf), Cauchy-Schwarz, triangle inequality, distance, metric space. Definitions §1–15. |
| DT_Lect_2_Infi_2.pdf | **Multivariable functions**: domain, range, graphs, level curves/surfaces. Sequences in R^n, limits of sequences (Heine definition), function limits (epsilon-delta and Heine). Topology intro: open ball, interior/exterior/boundary points. §18–40. |
| DT_Lect_3_Infi_2.pdf | **Limits** (continued) + **topology**: polar coordinates for limits, limit computation examples. Topology: interior (Int E), exterior (Ext E), boundary (∂E), open/closed sets, compact sets, Weierstrass theorem. Continuity definition and properties. §41–67. |
| DT_Lect_4_Infi_2.pdf | **Differentiability of multivariable functions**: partial derivatives (definition, computation), total differential df, differentiability definition, geometric meaning (tangent plane). Theorems: differentiability → continuity; continuous partial derivatives → differentiable. §21–35 (new numbering). Examples with f(x,y)=xy/(x²+y²), f=|x|+y^(1/3). |
| DT_Lect_5_Infi_2.pdf | **Linear approximation, tangent plane, chain rule**: differential as linear approximation, tangent plane to z=f(x,y), chain rule (dz/dt, ∂z/∂u, ∂z/∂v), directional derivative formula (grad·unit vector), gradient. §36–54. |
| DT_Lect_6_Infi_2.pdf | **Higher-order partial derivatives**, **Taylor polynomial for multivariable functions**: second-order partials, mixed partials (Schwarz theorem: f_xy=f_yx), second differential d²f, n-th differential. Taylor formula for f:R^n→R (Lagrange remainder). **Local extrema**: necessary conditions (f_x=f_y=0), sufficient conditions via Hessian discriminant Δ=AC-B², Sylvester criterion. §70–110. |
| DT_Lect_7_Infi_2.pdf | **Implicit function theorem** (1 equation, 2 variables; 1 equation, many variables; general system). **Constrained optimization — Lagrange multipliers** (single constraint, multiple constraints). Global extrema on compact domains. §117–210. |
| DT_Lect_8_Infi_2.pdf | **3D geometry**: planes, lines in R³, quadric surfaces (ellipsoid, hyperboloid 1-sheet, hyperboloid 2-sheets, elliptic paraboloid, hyperbolic paraboloid). **Double integral**: definition, Fubini theorem, iterated integrals, area/volume applications, center of mass. **Line integral type I** (scalar, arc-length element dσ). **Line integral type II** (vector field, work integral ∫F·dr). §211–309. |
| DT_Lect_9_Infi_2.pdf | **Implicit function theorem** (closed functions, F(x,y)=0, multiple variables) — detailed proofs and examples. Lagrange multipliers continued. §117–130 (overlaps with Lect 7 — extended version with proofs). |
| DT_Lect_10_Infi_2.pdf | **Lagrange multipliers** (detailed): free optimization vs constrained, single and multiple constraints, Lagrange function L=f+λg, critical conditions. Global extrema: interior + boundary analysis, closed domain method. §195–210. |
| DT_Lect_11_Infi_2.pdf | **Double integral** (continued): change of variables (Jacobian), polar coordinates substitution J=ρ. Applications: area S(D)=∬dxdy, volume, mass, center of mass formulas. §280–294. |
| DT_Lect_12_Infi_2.pdf | **Double integral change of variables** (continued) + **Line integral type I** (scalar, 2D and 3D curves, parametric form, arc length formula). Definition, properties, computation. §283–308. |
| DT_Lect_13_Infi_2.pdf | **Line integral type II** (work integral ∫P dx+Q dy): definition, computation, relation to type I. **Green's theorem**: ∮C(P dx+Q dy)=∬(Q_x-P_y)dxdy. Conservative fields (path-independent), potential function condition (P_y=Q_x), finding potential. §295–330 approx. |
| DT_Lect_14_Infi_2.pdf | **Triple integrals**: definition over rectangular box, Fubini theorem for triple integrals. Change of variables: cylindrical coordinates (x=ρcosθ, y=ρsinθ, z=z, J=ρ) and spherical coordinates (J=r²sinφ). Applications: volume, mass, center of mass. §approx 330+. |
| DT_Lect_15_Infi_2.pdf | **Surface integrals type I** (scalar, surface area element dS): parametric surfaces, surface area formula. **Surface integral type II** (flux integral, vector field through surface): definition, computation, orientation. **Gauss-Ostrogradsky theorem** (divergence theorem). §approx 360+. |
| DT_Lect_17_Infi_2.pdf | **Stokes' theorem** + **differential forms**: curl and divergence, Stokes formula ∮C F·dr=∬_S (∇×F)·dS. Differential k-forms in R^n, exterior derivative d, generalized Stokes theorem. |

---

## Infi 1 Review Lectures (in lectures/ folder)

| File | Topics / Sections |
|------|------------------|
| DT_lect_21_Infi_1.pdf | **Integration techniques** (Infi 1 review): integration of trig functions (sin^m·cos^n), substitution t=tan(x/2), reduction formulas. Integrals of irrational functions. §1–15 (Lect 21 numbering). |
| DT_lect_22_Infi_1.pdf | **Definite (Riemann) integral**: definition via upper/lower sums, integrability criterion, properties (linearity, monotonicity, mean value theorem). §1–19. |
| DT_lect_23_Infi_1.pdf | **Fundamental theorems of calculus**: Φ(x)=∫f(t)dt, Newton-Leibniz formula, substitution in definite integrals, integration by parts. Applications: area between curves. §1–14. |
| dt_lect_24_infi_2.pdf | **Volume of solid of revolution**: disk/washer method V=π∫f²dx, shell method V=2π∫xf dx, surface area of revolution. Arc length formula l=∫√(1+(f')²)dx. |

---

## Exercise Lists (in lectures/ folder — official course sheets)

| File | Problems | Topics |
|------|----------|--------|
| lectures/List_7.pdf | Q1–Q5 | **Extrema with/without constraints**: global min/max on closed domain (Q1a–e with various domains), constrained extrema via Lagrange (Q3), find 3 positive numbers summing to 100 with maximal product (Q4), constrained extrema in 3D (Q5). |
| lectures/List_8.pdf | Q1–Q11 | **Double integral**: iterate and compute (Q1), sketch domains (Q2), switch integration order (Q3), compute over rectangles (Q4), volume between surfaces (Q5), polar coordinates (Q6), Jacobian substitution (Q8–Q9), center of mass (Q11). |
| lectures/List_9.pdf | Q1–Q7 | **Line integrals type I & II, Green's theorem, conservative fields**: arc length and type-I integrals on curves (Q1–Q2), line integral type II / work (Q3–Q4), Green's theorem (Q5), closed path integrals (Q5), potential function (Q7), path independence check. |

---

## Exercise Lists (in exercises/ folder)

| File | Problems | Topics |
|------|----------|--------|
| List_1.pdf | Q1–Q6 | **Improper integrals**: convergence/divergence by definition (Q1), comparison test (Q2), find p-values for convergence (Q3), evaluate (Q4), existence questions (Q5), compute convergent ones (Q6). Infi 1 course. |
| List_2.pdf | Q1–Q3 | **Multivariable functions — domain and limits**: find domain (Q1, 6 sub-problems), level curves (Q2, 4 functions), limits at (0,0) — exists or not (Q3, 11 sub-problems including x²+y², x/(|x|+|y|), cot(x²+y²)). |
| List_3.md | Q1–Q15 | **Continuity** at (0,0): 15 piecewise-defined functions with f(0,0)=0, check continuity on maximal domain. Includes x²y/(x²+y²), x⁴y²/(x⁸+y⁴), sin(x³+4y⁴)/(x²+y²), (x²+y²)sin(1/(x²+y²)), xy³/(x²+y⁶), 2x²y²/(x²+2y²). |
| List_4.md | Ex1–Ex9 | **Partial derivatives and differentiability**: first-order partials (Ex1, 5 functions), partials at (0,0) from definition (Ex2), total differential (Ex3), linear approximation (Ex4), differentiability check at (0,0) (Ex5), tangent plane (Ex6), chain rule ∂z/∂s,∂z/∂t (Ex7–Ex8), chain rule du/dt (Ex9). |
| List_5.pdf / list_5.pdf | Q1–Q6 | **Directional derivative, gradient, higher-order derivatives**: directional derivative (Q1 2D, Q2 3D), find direction for given rate (Q3), gradient of scalar field (Q4), linearity of gradient proof (Q5), second-order differentials (Q6). |
| List_6.pdf | Q1–Q4 | **Implicit function theorem, local extrema**: implicit derivatives ∂z/∂x,∂z/∂y from equations (Q1–Q2), find z''_xy,z''_yy,z''_xx (Q3), find local extrema and saddle points (Q4, 6 functions including e^(x/2)(x+y²), 3x²y+y³-3x²-3y²+2). |
| List_8.pdf / list_8.pdf | Q1–Q11 | **Double integral** (identical content to lectures/List_8.pdf): iterated integrals (Q1), domains (Q2), order reversal (Q3), over rectangles (Q4), volume (Q5), polar coordinates (Q6), Jacobian (Q8–Q9), center of mass (Q11). Note: duplicate in both directories. |

---

## Solution Files (in lectures/ folder)

| File | Solves |
|------|--------|
| lectures/Sol_List_6.pdf | **List_6** Q1–Q4: full worked solutions — implicit differentiation (Q1–Q3), local extrema with Δ-criterion (Q4). |
| lectures/Sol_List_7.pdf | **List_7** Q1–Q5: full worked solutions — global extrema on closed domains (Q1 a–e with detailed boundary analysis), constrained Lagrange (Q3–Q5). |
| lectures/Sol_List_8.pdf | **List_8** Q1–Q11: full worked solutions — double integrals, polar, Jacobian, center of mass. |

---

## Solution Files (in exercises/ folder)

| File | Solves |
|------|--------|
| Sol_List_1.pdf | **List_1** Q1–Q6: improper integrals — full worked solutions, convergence/divergence, p-values, comparison. |
| Sol_List_5.pdf | **List_5** Q1–Q6: directional derivatives, gradient, higher-order partials — full worked solutions. |
| Sol_List_6.pdf | **List_6** Q1–Q4: implicit function theorem, local extrema — full solutions (same content as lectures/Sol_List_6.pdf). |
| Sol_List_7.pdf | **List_7** Q1–Q5: extrema with/without constraints — full solutions (same content as lectures/Sol_List_7.pdf). |
| Sol_List_8.pdf | **List_8** Q1–Q11: double integrals — full solutions (same content as lectures/Sol_List_8.pdf). |

---

## Additional Exercise Lists (Add_List_*, in exercises/ folder)

| File | Problems | Topics |
|------|----------|--------|
| Add_List_1.pdf | Q1–Q6 | **Improper integrals** (extra practice): convergence/divergence (Q1), comparison test (Q2), exact values (Q3), existence (Q4), detailed analysis (Q5, 6 sub-problems), compute if convergent (Q6). Mirrors List_1. |
| Add_List_3.pdf | Q1–Q6 | **Continuity of multivariable functions** (extra, with graphs): domain and continuity, 6 piecewise-defined functions at (0,0) — xy²/(x²+y²), x⁴y²/(x⁸+y⁴), sin(x³+4y⁴)/(x²+y²), (x²+y²)sin(1/(x²+y²)) with f(0,0)=e, xy³/(x²+y⁶), 2x²y²/(x²+2y²). |
| Add_List_4.pdf | Q1–Q5 | **Partial derivatives, total differential, differentiability**: first-order partials of 3 functions (Q1), linear approximation (Q2), check differentiability of z=∛(xy) at (0,0) (Q3), chain rule ∂w/∂u,∂w/∂v (Q4), prove identity for polar chain rule (Q5). |
| Add_List_5.pdf | Q1–Q3 | **Directional derivative, gradient, higher-order**: directional derivative (Q1, 3 sub-problems with non-smooth functions), find direction for given rate of change (Q2), second-order differential (Q3). |
| Add_List_6.pdf | Q1–Q4 | **Implicit function theorem, local extrema** (extra): implicit partials from 3 types of equations (Q1), compute partials at point (Q2), find extrema and saddle points (Q3, 2 functions), find extrema from given partial conditions (Q4). |
| Add_List_7.pdf | Q1–Q4 | **Constrained extrema and global extrema** (extra): global min/max on closed domain (Q1), constrained extrema via Lagrange with 2 constraints (Q2), nearest point on plane (Q3), max/min of f=x-2y+5z on sphere (Q4). |
| Add_List_8.pdf | Q1–Q9 | **Double integral** (extra): iterated integrals (Q1 a–d), write domain bounds (Q2), switch order (Q4), double integral over domain (Q5), polar coordinates (Q6), Jacobian substitution (Q7), area of region (Q8), volume (Q9). |
| Add_List_9.pdf | Q1–Q9 | **Line integrals type I & II, Green's theorem, conservative fields** (extra): type-I line integrals on curves (Q1–Q2), type-II integrals / work (Q3–Q4), xdy-ydx formula (Q5), Green's theorem via closed path (Q6), area enclosed by curve (Q7), build antiderivative from line integral (Q8), find potential function / check conservative (Q9). |
| Add_List_5 (1).pdf | — | Duplicate of Add_List_5.pdf (identical content). |

**Note:** Add_List_2.pdf does not exist in the directory.

---

## Solutions to Additional Lists (in exercises/ folder)

| File | Solves |
|------|--------|
| Sol_Add_List_1.pdf | **Add_List_1**: improper integrals — full worked solutions. |
| Sol_Add_List_2.pdf | **Add_List_2** (or List_2 + Add_List_3): multivariable functions domain/limits/continuity — full solutions with graphs; includes sketches of level curves and domain boundaries. |
| Sol_Add_List_3.pdf | **Add_List_3**: continuity of piecewise functions — full solutions with limit proofs (polar, squeeze). |
| Sol_Add_List_4.pdf | **Add_List_4**: partial derivatives, differentiability — full solutions including z=∛(xy) differentiability at origin. |
| Sol_Add_List_5.pdf | **Add_List_5**: directional derivative, gradient — full solutions. |
| Sol_Add_List_6.pdf | **Add_List_6**: implicit function theorem, local extrema — full solutions. |
| Sol_Add_List_7.pdf | **Add_List_7**: constrained and global extrema — full solutions. |
| Sol_Add_List_8.pdf | **Add_List_8**: double integrals — full solutions including polar, Jacobian, volume. |

---

## Additional Exercises (self-made, .tex source in additional_exercises/src/)

| File (PDF / .tex) | Problems | Topics |
|-------------------|----------|--------|
| add_ex_1_limits_continuity.tex | Ex1(a–e), Ex2(a–d), Ex3(a–j), Ex4(a–h) | **Limits & Continuity**: domain + sketch (Ex1), level curves (Ex2), limits at (0,0) — 10 problems with difficulty ratings (Ex3), continuity check — 8 piecewise functions (Ex4). Mirrors List_2 & List_3. Difficulty: ★/★★/★★★. |
| add_ex_2_partial_derivatives.tex | Ex1(a–j), Ex2(a–e), Ex3(a–e), Ex4(a–d), Ex5(a–f) | **Partial Derivatives & Differentiability**: first-order partials 10 functions (Ex1), partials at (0,0) from definition 5 functions (Ex2), verify identities (Ex3), check differentiability at (0,0) 4 functions incl. ∛(xy) (Ex4), tangent plane 6 problems incl. level surface (Ex5). Mirrors List_4 Ex1–5. |
| add_ex_3_linear_approx_chain_rule.tex | Ex1(a–j), Ex2(a–f), Ex3(a–d), Ex4(a–h), Ex5(a–g) | **Total Differential, Linear Approx, Chain Rule, Implicit Diff**: total differentials 10 functions (Ex1), numerical approximation 6 problems (Ex2), measurement error analysis 4 problems (Ex3), chain rule 8 problems incl. abstract identities (Ex4), implicit differentiation 7 problems (Ex5). Mirrors List_4 Ex3–9. |
| add_ex_4_gradient_higher_order.tex | Ex1(a–g), Ex2(a–d), Ex3(a–g), Ex4(a–f), Ex5(a–g) | **Gradient, Directional Derivatives, Higher-Order Partials**: directional derivative 7 problems incl. non-smooth (Ex1), find direction for given rate 4 problems (Ex2), gradient at point 7 problems incl. abstract f(r) (Ex3), second-order partials + Laplace equation 6 problems (Ex4), second differential d²u 7 problems (Ex5). Mirrors List_5. |
| add_ex_5_improper_integrals_topology.tex | Ex1(a–m), Ex2(a–j), Ex3(a–f), Ex4(a–e) | **Improper Integrals & Topology**: convergence/divergence 13 problems (Ex1), topology of R^n — classify sets (open/closed/compact) 10 problems (Ex2), norms and Cauchy-Schwarz inequalities 6 problems (Ex3), exact computation of convergent integrals 5 problems (Ex4). Mirrors List_1 + Lects 1 & 3. |
| add_sol_1.tex | Solutions to add_ex_1 | Full solutions: limits & continuity. |
| add_sol_2.tex | Solutions to add_ex_2 | Full solutions: partial derivatives & differentiability. |
| add_sol_3.tex | Solutions to add_ex_3 | Full solutions: linear approx, chain rule, implicit diff. (also compiled as add_sol_3.pdf) |
| add_sol_4.tex | Solutions to add_ex_4 | Full solutions: gradient, directional derivatives, higher-order. |
| add_sol_5.tex | Solutions to add_ex_5 | Full solutions: improper integrals & topology. |

---

## Other Files

| File | Content |
|------|---------|
| diif_summary_exec.pdf | **Differentiability — executive summary sheet** (for mathematicians): differentiability check problems for multivariable functions. Includes: f=∛(x³+y³) at axes (Q1), f=e^(-1/(x²+y²)) (Q2), domain+f_x(x,1) for f=x+(y-1)arcsin√(y/x) (Q3), continuity+partials for f=x³y/(x⁶+y⁶) (Q4), f_xy vs f_yx for f=x^(x²) (Q5), f_xy(0,0) for f=2xy/(x²+y²) (Q6), Taylor polynomial p_n(x,y) at (0,0) (Q7), du for u=f(√(x²+y²)) (Q8), chain rule proof with g(u,v)=f(x-y,y-z) (Q9), Euler-type PDE with g(t), h(x/y) (Q10), directional derivative at M(a/√2,b/√2) on ellipsoid (Q11), grad z via chain rule (Q12), implicit system cyclic derivative product=-1 (Q13–14), critical points (Q15–16), global extrema on disk (Q17–18), Lagrange multiplier (Q19–20). Advanced / exam-style. |
| worksheet_order_change.pdf / .tex | Worksheet with reordered problems (LaTeX source available). |
| List_3.pdf | PDF version of List_3 — same content as List_3.md (continuity problems). |
| List_4.pdf | PDF version of List_4 — same content as List_4.md (partial derivatives). |

---

## Quick Topic Lookup

| Topic | Primary files |
|-------|--------------|
| Improper integrals (convergence tests, p-integral) | List_1, Add_List_1, Sol_List_1, Sol_Add_List_1, DT_Lect_1, add_ex_5 |
| R^n topology (open/closed/compact, norms, inner product) | DT_Lect_1, DT_Lect_3, add_ex_5 |
| Multivariable domain, level curves, sequences | DT_Lect_2, List_2, Sol_Add_List_2 |
| Limits at (0,0) — polar/squeeze/path test | DT_Lect_2, DT_Lect_3, List_2, add_ex_1 |
| Continuity of piecewise functions at origin | DT_Lect_3, List_3.md, Add_List_3, add_ex_1 |
| Partial derivatives (first-order, from definition) | DT_Lect_4, List_4.md, add_ex_2 |
| Differentiability, tangent plane, total differential | DT_Lect_4, DT_Lect_5, List_4.md, add_ex_2, diif_summary_exec |
| Chain rule (composite, implicit) | DT_Lect_5, List_4.md, add_ex_3 |
| Directional derivative, gradient | DT_Lect_5, List_5, Add_List_5, add_ex_4 |
| Higher-order partials, Schwarz theorem, d²f | DT_Lect_6, List_5, add_ex_4 |
| Taylor polynomial (multivariable) | DT_Lect_6, diif_summary_exec |
| Local extrema (critical points, Δ=AC-B² criterion) | DT_Lect_6, List_6, Add_List_6, Sol_List_6 |
| Implicit function theorem, ∂z/∂x via F | DT_Lect_7, DT_Lect_9, List_6, Add_List_6, Sol_List_6 |
| Lagrange multipliers (constrained optimization) | DT_Lect_7, DT_Lect_10, lectures/List_7, Add_List_7, Sol_List_7 |
| Global extrema on compact domains | DT_Lect_7, DT_Lect_10, lectures/List_7, Sol_List_7 |
| Double integral (Fubini, iteration, order reversal) | DT_Lect_11, DT_Lect_12, lectures/List_8, exercises/List_8, Add_List_8 |
| Double integral — polar coordinates | DT_Lect_11, DT_Lect_14, lectures/List_8, Add_List_8 |
| Double integral — Jacobian / change of variables | DT_Lect_11, DT_Lect_14, lectures/List_8, Add_List_8, Sol_List_8 |
| Line integral type I (scalar, arc length) | DT_Lect_12, DT_Lect_13, lectures/List_9, Add_List_9 |
| Line integral type II (work, ∫P dx+Q dy) | DT_Lect_13, lectures/List_9, Add_List_9 |
| Green's theorem | DT_Lect_13, lectures/List_9, Add_List_9 |
| Conservative fields, potential function | DT_Lect_13, lectures/List_9, Add_List_9 |
| Triple integrals (cylindrical, spherical) | DT_Lect_14 |
| Surface integrals, Gauss theorem | DT_Lect_15 |
| Stokes theorem, differential forms | DT_Lect_17 |
| 3D geometry (planes, lines, quadrics) | DT_Lect_8 (§211–248) |
| Single-variable integration review (trig, substitution) | DT_lect_21_Infi_1, DT_lect_22_Infi_1, DT_lect_23_Infi_1, dt_lect_24_infi_2 |
