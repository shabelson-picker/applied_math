# Infinitesimal Calculus 2 — Master Theorems & Reference

> **Course**: 21152, HIT — Prof. Anatoly Golberg
> This file follows the syllabus week-by-week. Updated as new lecture materials are provided.

---

## 0. Review — Improper Integrals (from Lecture 1)

### Types
- **Type I** (infinite limits): ∫[a,∞) f(x)dx = lim[b→∞] ∫[a,b] f(x)dx
- **Type II** (unbounded integrand): f blows up at endpoint, take one-sided limit

### Reference Integrals (p-test)
| Integral | Converges when |
|----------|---------------|
| ∫[1,∞) dx/xᵖ | p > 1 |
| ∫[0,1] dx/xᵖ | p < 1 |

### Convergence Tests (f ≥ 0)

| Test | Statement | When to Use |
|------|-----------|-------------|
| **Comparison** | 0 ≤ f(x) ≤ g(x), ∫g conv → ∫f conv | Bound by known integral |
| **Limit Comparison** | lim f(x)/g(x) = L ∈ (0,∞) → both behave same | Asymptotic behavior |

### Useful Asymptotic Facts (from Lecture 1, Ex. 4)
When α → 0:
- sin(α)/α → 1
- (eᵅ - 1)/α → 1
- ln(1 + α)/α → 1

**Strategy**: For complicated integrands near 0 or ∞, replace each piece by its asymptotic equivalent, then compare with a p-integral.

### Lecture 1 Examples Pattern
1. **Ex 1**: ∫[1,∞) dx/(x¹⁰+1) — bound by 1/x¹⁰, converges (p=10 > 1)
2. **Ex 2**: ∫[1,∞) √(x+cos x)/(x²+2ln x) dx — bound by (1/x^(3/2) + 1/x²), converges
3. **Ex 3**: ∫[1,∞) (√(x²+1) - √(x²-1)) dx — rationalize, limit-compare with 1/x, diverges
4. **Ex 4**: ∫[0,1] ln(1+³√x)/(e^(sin x)-1) dx — asymptotic equivalence near 0 gives ~³√x/x = x^(-2/3), converges (p=2/3 < 1)

---

## 1. Topology of ℝⁿ (Weeks 1 & 3)

### Euclidean Space ℝⁿ
- A point/vector: x̄ = (x₁, x₂, …, xₙ)
- ℝⁿ is a **linear (vector) space**: closed under addition and scalar multiplication

### Norm
A function ‖x̄‖: ℝⁿ → ℝ⁺ is a **norm** if:
1. ‖x̄‖ = 0 ⟺ x̄ = 0
2. ‖αx̄‖ = |α|·‖x̄‖
3. **Triangle inequality**: ‖x̄ + ȳ‖ ≤ ‖x̄‖ + ‖ȳ‖

### Common Norms in ℝ² (example: x̄ = (x₁, x₂))
| Norm | Formula |
|------|---------|
| Euclidean (L²) | ‖x̄‖₂ = √(x₁² + x₂²) |
| L¹ (Manhattan) | ‖x̄‖₁ = \|x₁\| + \|x₂\| |
| L∞ (max) | ‖x̄‖∞ = max(\|x₁\|, \|x₂\|) |

### Inner Product (Scalar Product)
⟨x̄, ȳ⟩ is a real number satisfying:
1. ⟨x̄, x̄⟩ ≥ 0, and = 0 ⟺ x̄ = 0
2. ⟨x̄, ȳ⟩ = ⟨ȳ, x̄⟩
3. ⟨αx̄ + βȳ, z̄⟩ = α⟨x̄, z̄⟩ + β⟨ȳ, z̄⟩

**Connection to norm**: ‖x̄‖ = √⟨x̄, x̄⟩

**Examples**:
- In ℝⁿ: ⟨x̄, ȳ⟩ = Σ xₖyₖ
- In C[a,b]: ⟨f, g⟩ = ∫[a,b] f(x)g(x) dx

### Metric (Distance)
d(x̄, ȳ) = ‖x̄ - ȳ‖

Properties:
1. d(A,B) ≥ 0
2. d(A,B) = 0 ⟺ A = B
3. d(A,B) = d(B,A)
4. **Triangle inequality**: d(A,B) ≤ d(A,C) + d(C,B)

### Cauchy-Schwarz Inequality
(Σ |xᵢyᵢ|)² ≤ (Σ xᵢ²)(Σ yᵢ²)

**Proof idea** (from lecture): Define P(t) = Σ(t|xᵢ| - |yᵢ|)² ≥ 0. This is a quadratic in t with non-positive discriminant, giving the inequality.

### Topology Definitions (Lecture 3)

**Open ball**: B(ā, r) = {x̄ : ‖x̄ − ā‖ < r} — open ball of radius r centered at ā.

For a set E ⊆ ℝⁿ and a point ā:

| Type | Definition |
|------|-----------|
| **Interior point** | ∃ B(ā,r) ⊆ E |
| **Exterior point** | ∃ B(ā,r) with B(ā,r) ∩ E = ∅ |
| **Boundary point** | Every B(ā,r) meets both E and ℝⁿ \ E |
| **Interior** Int(E) | Set of all interior points |
| **Exterior** Ext(E) | Set of all exterior points |
| **Boundary** ∂E | Set of all boundary points |

**Open set**: Every point of E is interior (Int E = E).

**Closed set**: E contains its boundary (∂E ⊆ E). Equivalently: ℝⁿ \ E is open.

**Bounded set**: E is contained in some ball B(ā, r).

**Compact set**: E is **closed and bounded**.

### Weierstrass Theorems (for multivariable)
- **Weierstrass 1**: A function continuous on a compact set is bounded on it.
- **Weierstrass 2**: A function f(x̄) continuous on a compact set E attains its supremum M = sup_E f(x̄) and infimum m = inf_E f(x̄) on E.

---

## 2. Multivariable Functions — Basics (Weeks 1–2, Lecture 2)

### Definition
f: ℝⁿ → ℝ assigns a single real number y to each x̄ ∈ ℝⁿ.

### Domain
Find where f is defined. Common restrictions: square roots ≥ 0, logs > 0, denominators ≠ 0.

### Level Curves and Surfaces
- **Level curve**: f(x,y) = C (a curve in ℝ² for each constant C)
- **Level surface**: f(x,y,z) = C (a surface in ℝ³ for each constant C)

### Sequences in ℝⁿ
- **Thm 1**: x̄⁽ᵐ⁾ → ā = (a₁,…,aₙ) ⟺ each component converges: xₖ⁽ᵐ⁾ → aₖ for k = 1,…,n.

### Limits of Functions

**Definition 1 (Heine)**: lim[x̄→ā] f(x̄) = L if for every sequence x̄⁽ᵐ⁾ → ā, we get f(x̄⁽ᵐ⁾) → L.

**Definition 2 (Cauchy/ε-δ)**: lim[x̄→ā] f(x̄) = L if ∀ε>0 ∃δ>0 such that 0 < d(x̄,ā) < δ ⟹ |f(x̄) - L| < ε.

**Thm 2**: Definitions 1 and 2 are equivalent.

### Techniques for Limits

**To show limit does NOT exist**: Find two paths to ā giving different limits.
- Example (Lecture 2): lim[(x,y)→(0,0)] xy/(x²+y²)
  - Along x=0: limit = 0
  - Along y=x: limit = 1/2
  - ⟹ Limit does not exist

**To show limit DOES exist**:
1. **Polar coordinates**: x = r cos θ, y = r sin θ. If result → L as r→0 independently of θ, then limit = L.
2. **Squeeze theorem**: Bound |f(x,y) - L| by something that → 0.
3. **ε-δ proof**: Direct verification.

**WARNING — Polar coordinates can fail**: If in polar the expression still depends on θ in a way that doesn't vanish as r→0, the limit may not exist. In that case, go back to finding two paths.

### Limit Examples (Lecture 3)

| Function | Limit at (0,0) | Method |
|----------|---------------|--------|
| xy²/(x²+y²) | **0** | Polar: r cos θ sin²θ → 0. Squeeze: \|xy²/(x²+y²)\| ≤ \|y\| → 0 |
| xy²/(x²+y⁴) | **DNE** | Path x=0: 0; path x=y²: 1/2 |
| x²y²(x²+y²)/(x⁴+y⁴) | **0** | Polar: ρ²cos²θsin²θ/(cos⁴θ+sin⁴θ) ≤ 2ρ² → 0 (since cos⁴θ+sin⁴θ ≥ 1/2) |
| sin(x−y)/(x−y) | **DNE** | Not defined on path y=x through (0,0) → no punctured neighborhood |

**Key trick**: cos⁴θ + sin⁴θ = 1 − 2sin²θcos²θ ≥ 1 − 1/2 = 1/2 (useful bound in polar).

### Continuity
- f is continuous at ā if lim[x̄→ā] f(x̄) = f(ā)
- f continuous on open/closed domain: continuous at every point of that domain

---

## 3. Partial Derivatives & Differentiability (Weeks 2 & 4)

### Partial Derivatives (First Order) — Formal Definition
For z = f(x,y) at (x₀, y₀):

**∂f/∂x** = fₓ(x₀,y₀) = lim[Δx→0] [f(x₀+Δx, y₀) − f(x₀,y₀)] / Δx

**∂f/∂y** = fᵧ(x₀,y₀) = lim[Δy→0] [f(x₀, y₀+Δy) − f(x₀,y₀)] / Δy

**Computationally**: fₓ — differentiate w.r.t. x, treat y as constant; fᵧ — differentiate w.r.t. y, treat x as constant.

### Differentiability — Formal Definition (Lecture 4)
z = f(x,y) is **differentiable** at (x₀,y₀) if the increment can be written as:

Δf(x₀,y₀) = A·Δx + B·Δy + α·Δx + β·Δy

where α, β → 0 as Δx, Δy → 0.

The expression A·Δx + B·Δy is the **total differential**: df(x₀,y₀) = A·Δx + B·Δy.

Equivalently: f is differentiable at (x₀,y₀) iff

lim[Δρ→0] [Δf − fₓ(x₀,y₀)Δx − fᵧ(x₀,y₀)Δy] / Δρ = 0,   where Δρ = √(Δx²+Δy²)

### Hierarchy of Properties (CRITICAL)

```
Continuous partial derivatives (fₓ, fᵧ continuous)
        ↓  (Thm 3, converse FALSE — see Ex. 4)
    Differentiable
    ↙           ↘
Continuous      Partial derivatives exist
(Thm 1)         (Thm 2, A = fₓ, B = fᵧ)
(converses both FALSE)
```

- **Thm 1**: Differentiable → Continuous (but not vice versa)
- **Thm 2**: Differentiable → partial derivatives exist (but not vice versa)
- **Thm 3 (Sufficient)**: fₓ, fᵧ exist and are continuous → differentiable (proved via Lagrange MVT)

### Counterexamples (Lecture 4) — Know These!

| Function | At (0,0) | What holds | What fails |
|----------|----------|-----------|-----------|
| f = xy/(x²+y²), f(0,0)=0 | (0,0) | fₓ=fᵧ=0 exist | Not continuous, NOT differentiable |
| f = \|x\| + ∛(y²) | (0,0) | Continuous | No partial derivatives |
| f = (x²+y²)sin(1/(x²+y²)), f(0,0)=0 | (0,0) | Differentiable (df=0) | fₓ, fᵧ NOT continuous |

**Key lesson**: Existence of partial derivatives alone does NOT guarantee differentiability or even continuity!

### ⚠ Common Misconceptions — Partial Derivatives (From Practice)

**1. fx(a,b) = 0 does NOT mean fx is continuous at (a,b).**
These are completely different statements:
- fx(a,b) = 0 is a single number — the value of the partial at one point
- fx continuous at (a,b) requires: fx(x,y) → fx(a,b) as (x,y) → (a,b) from all directions
You can have fx(0,0) = 0 while fx(x,y) is wildly discontinuous near (0,0).

**2. Existence of fx, fy at a point does NOT imply f is continuous there.**
Classic example: f = x³y/(x⁶+y⁶), f(0,0)=0.
- fx(0,0) = fy(0,0) = 0 (both exist — just compute the limit along axes)
- But along y = x: f(x,x) = x⁴/(2x⁶) = 1/(2x²) → ∞. Not continuous!
**Always check continuity first** (try paths y=x, y=x², y=mx) before claiming differentiability.

**3. fxy(a,b) requires knowing fx as a function near (a,b), not just its value at (a,b).**
fxy(0,0) = lim[k→0] [fx(0,k) − fx(0,0)] / k
This limit depends on the behavior of fx(0,y) as y→0 — i.e., you need the formula for fx away from the origin.
Example: f = 2xy/(x²+y²), f(0,0)=0.
- fx(0,0) = 0 (from definition, f(h,0)=0 for all h)
- But fx(0,y) = 2/y for y≠0 → fxy(0,0) = lim[k→0] (2/k)/k = lim 2/k² → ∞ (does not exist)

### Proving Differentiability by Definition — 3-Step Procedure
Used at **suspicious points** (origin, corners, piecewise definitions) where Thm 3 cannot be applied directly.

**Step 1 — Compute partial derivatives by definition**:

fₓ(x₀,y₀) = lim[Δx→0] [f(x₀+Δx, y₀) − f(x₀,y₀)] / Δx

fᵧ(x₀,y₀) = lim[Δy→0] [f(x₀, y₀+Δy) − f(x₀,y₀)] / Δy

If either limit does not exist → not differentiable. Stop.

**Step 2 — Form the limit**:

lim[Δρ→0] [Δf − fₓ·Δx − fᵧ·Δy] / Δρ = 0 ?

where Δf = f(x₀+Δx, y₀+Δy) − f(x₀,y₀) and Δρ = √(Δx²+Δy²)

**Step 3 — Evaluate using polar substitution**:
Set Δx = r cosθ, Δy = r sinθ, so Δρ = r → 0.
- If the expression → 0 for **all** θ → **differentiable**
- If it depends on θ and doesn't vanish → **not differentiable**

**Common pattern at (0,0)**:
- Step 1 usually gives fₓ = fᵧ = 0 (function vanishes along axes)
- Step 2 becomes: lim f(Δx, Δy)/Δρ = 0 ?
- Step 3: substitute polar and check if f(r cosθ, r sinθ)/r → 0

**Example** (Add_List_5 Q1): f = x²y/(x⁴+y²), f(0,0)=0
- Step 1: fₓ(0,0) = 0, fᵧ(0,0) = 0
- Step 2: need lim f(Δx,Δy)/r → 0
- Step 3: f/r = r²cos²θ·r sinθ / (r⁴cos⁴θ + r²sin²θ) → along y=x² path (θ varies): limit = 1/2 ≠ 0
- Conclusion: **not differentiable** at (0,0)

### Total Differential (practical form)
df = fₓ dx + fᵧ dy   (or df = fₓ Δx + fᵧ Δy for increments)

### Linear Approximation
f(x,y) ≈ f(a,b) + fₓ(a,b)(x-a) + fᵧ(a,b)(y-b)

**Use for**: Approximate f near a known point (a,b).

### Tangent Plane to z = f(x,y) at (a,b)
z − f(a,b) = fₓ(a,b)(x−a) + fᵧ(a,b)(y−b)

### Normal to the Surface z = f(x,y)
Direction: n̄ = (fₓ(a,b), fᵧ(a,b), −1)

### Chain Rule
If z = f(x,y), x = x(t), y = y(t):
- dz/dt = (∂f/∂x)(dx/dt) + (∂f/∂y)(dy/dt)

If z = f(x,y), x = x(u,v), y = y(u,v):
- ∂z/∂u = (∂f/∂x)(∂x/∂u) + (∂f/∂y)(∂y/∂u)
- ∂z/∂v = (∂f/∂x)(∂x/∂v) + (∂f/∂y)(∂y/∂v)

**Polar chain rule** (List 4 Add, Q5): w = f(x,y), x = r cos t, y = r sin t:
- (1/r)(∂w/∂t) = −fₓ sin t + fᵧ cos t

---

## 4. Directional Derivative & Gradient (Week 3)

### Directional Derivative
D_ū f(a,b) = lim[t→0] (f(ā + tū) - f(ā))/t

If f is differentiable: **D_ū f = ∇f · ū** (dot product with unit vector ū)

### Gradient
∇f = (∂f/∂x, ∂f/∂y) [or (∂f/∂x, ∂f/∂y, ∂f/∂z) in ℝ³]

- |∇f| = maximum rate of change
- Direction of ∇f = direction of steepest ascent
- ∇f is perpendicular to level curves/surfaces

### Tangent Plane to Level Surface F(x,y,z) = C at point (x₀,y₀,z₀)
Fₓ(x₀,y₀,z₀)(x-x₀) + Fᵧ(x₀,y₀,z₀)(y-y₀) + F_z(x₀,y₀,z₀)(z-z₀) = 0

### ⚠ Common Pitfall — Directional Derivative Along a Normal (From Practice)

**Two separate objects: ∇F (defines the curve) vs ∇f (the function being differentiated).**

Setup: curve C: F(x,y) = 0, point M on C, function f(x,y). Find the directional derivative of f at M in the direction of the inward normal to C.

Step 1 — Get the direction unit vector:  
  ∇F = (Fx, Fy) is the outward normal to C.  
  Inward normal unit vector: û = −∇F/|∇F| (negate; magnitude normalizes it).  
  Do NOT assume the point is in the first quadrant — the sign of ∇F components determines inward vs outward automatically.

Step 2 — Compute the derivative value:  
  D_û f(M) = ∇f(M) · û = −(∇f · ∇F)/|∇F|

**Error to avoid**: computing ∇F but then using it directly as if it were ∇f, or negating based on "which quadrant the point is in" rather than always using −∇F/|∇F|.

### Higher-Order Partial Derivatives
- fₓₓ, fₓᵧ, fᵧₓ, fᵧᵧ

### Mixed Derivatives (Schwarz/Clairaut Theorem)
**Statement**: If fₓ, fᵧ, fₓᵧ, fᵧₓ are all **continuous** in a neighborhood of (x₀,y₀) → fₓᵧ = fᵧₓ at that point.

**Proof idea** (Lecture 6, §73–74):
Define A = f(x₀+Δx, y₀+Δy) − f(x₀+Δx, y₀) − f(x₀, y₀+Δy) + f(x₀, y₀).
- Group by x first → apply Lagrange twice → A = fₓᵧ(x̃, ỹ)·Δx·Δy
- Group by y first → apply Lagrange twice → A = fᵧₓ(x̂, ŷ)·Δx·Δy
- So fₓᵧ(x̃, ỹ) = fᵧₓ(x̂, ŷ) at intermediate points.
- Let Δx, Δy → 0: all intermediate points → (x₀,y₀). Continuity guarantees the values collapse to fₓᵧ = fᵧₓ at (x₀,y₀). ∎

**Counterexample without continuity**: f(x,y) = xy(x²−y²)/(x²+y²) at (0,0) gives fₓᵧ(0,0) = −1 ≠ 1 = fᵧₓ(0,0).

### Higher-Order Differentials (Lecture 6–7)
For z = f(x,y), the n-th order differential is:

dⁿf = (∂/∂x dx + ∂/∂y dy)ⁿ f   (formal symbolic power)

**Second-order** (when mixed partials are continuous, so fₓᵧ = fᵧₓ):

d²f = fₓₓ dx² + 2fₓᵧ dx dy + fᵧᵧ dy²

d²f is a **quadratic form** in dx, dy — this connects to the extrema test.

For 3 variables: d²f = fₓₓdx² + fᵧᵧdy² + f_zzdz² + 2fₓᵧdxdy + 2fₓzdxdz + 2fᵧzdydz

---

## 5. Taylor Polynomial & Extrema (Weeks 4–5, Lectures 7–8)

### Taylor Polynomial (multivariable)
**Theorem** (Lecture 7, §82): If f: ℝᵐ → ℝ has continuous partial derivatives up to order n+1 in a ball B(ā, r), then for x̄ ∈ B(ā, r):

Δf(ā) = df(ā) + ½d²f(ā) + … + (1/n!)dⁿf(ā) + (1/(n+1)!)dⁿ⁺¹f(c̄)

where c̄ is some point between ā and x̄.

**Proof idea**: Define F(t) = f(x₀+tΔx, y₀+tΔy), 0 ≤ t ≤ 1. Then dᵏF/dtᵏ = dᵏf(x₀,y₀). Apply 1-variable Taylor to F.

**Taylor polynomial of order n**: pₙ(x̄) = f(ā) + df(ā) + ½d²f(ā) + … + (1/n!)dⁿf(ā)

**Example** (2nd order around (0,0) for f = eˣʸ):
p₂(x,y) = 1 + 0 + ½·2dxdy = 1 + xy

### Local Extrema — Definitions
- **Local minimum** at ā: f(x̄) ≥ f(ā) for all x̄ in some ball B(ā,r)
- **Local maximum** at ā: f(x̄) ≤ f(ā) for all x̄ in some ball B(ā,r)
- **Saddle point** at ā: in every ball, ∃ x̄, z̄ with f(x̄) < f(ā) < f(z̄)
- **Critical point**: all partial derivatives = 0 or don't exist (at least one must exist and be 0)

### Necessary Condition (Theorem 1, Lecture 7, §91)
If ā is a local extremum of f and f has all partial derivatives at ā, then:

∂f/∂xᵢ (ā) = 0   for all i = 1, …, m

**Proof**: Fix all variables except xᵢ → reduces to 1-variable extremum → that derivative = 0.

**Warning**: This is necessary only. A critical point may be a saddle (e.g. z = x² − y² at (0,0)).

### Sufficient Condition — 2 Variables (Theorem 2, Lecture 8, §100)
At a critical point (x₀,y₀) where fₓ = fᵧ = 0, define:

A = fₓₓ(x₀,y₀),  B = fₓᵧ(x₀,y₀),  C = fᵧᵧ(x₀,y₀),  Δ = AC − B²

| Δ | A | Conclusion |
|---|---|------------|
| Δ > 0 | A > 0 | **Local minimum** |
| Δ > 0 | A < 0 | **Local maximum** |
| Δ < 0 | — | **Saddle point** |
| Δ = 0 | — | **Inconclusive** |

**Proof idea** (Lecture 8, §101): Taylor expansion gives Δf ≈ ½d²f = ½(AΔx² + 2BΔxΔy + CΔy²). In polar (Δx = ρcosθ, Δy = ρsinθ):

d²f = ρ²/A · [(Acosθ + Bsinθ)² + (AC − B²)sin²θ]

If Δ > 0: expression in brackets has constant sign (= sign of A) for all θ → extremum.
If Δ < 0: can find two angles giving opposite signs → saddle.

### Sufficient Condition — n Variables (Lecture 8, §115)
At a critical point ā, d²f(ā) is a **quadratic form**. Then:
- d²f positive definite → **local minimum**
- d²f negative definite → **local maximum**

### Hessian Matrix (Lecture 8, §116)
The matrix of second-order partial derivatives at a critical point:

H = | fₓₓ  fₓᵧ  fₓz |
    | fᵧₓ  fᵧᵧ  fᵧz |
    | fzₓ  fzᵧ  fzz |

(By Schwarz: H is symmetric when mixed partials are continuous.)

d²f is the quadratic form associated with H. Definiteness of H ↔ definiteness of d²f.

### Sylvester's Criterion
For a symmetric matrix H with leading principal minors Δ₁, Δ₂, …, Δₙ:
- **Positive definite** (→ local min): Δ₁ > 0, Δ₂ > 0, …, Δₙ > 0
- **Negative definite** (→ local max): Δ₁ < 0, Δ₂ > 0, Δ₃ < 0, … (alternating, starting negative)
- Otherwise: indefinite (saddle) or inconclusive (Δₙ = 0)

**For 2 variables**: Δ = AC − B² (same as above). Positive definite ⟺ A > 0 and Δ > 0.

### When Δ = 0 — Direct Analysis
The test gives no answer. Analyze sign of Δf = f(x,y) − f(x₀,y₀) directly near the critical point:
- Check along several paths (y = y₀, x = x₀, y = x, y = x²)
- If Δf ≥ 0 in all directions → minimum
- If Δf ≤ 0 in all directions → maximum
- If Δf changes sign → saddle
- Polar substitution x = x₀ + r cosθ, y = y₀ + r sinθ can reveal θ-dependence (saddle) or not (extremum)

### Useful Structural Observations
**Linear first derivatives → constant Hessian**: If f_x and f_y are both linear in x, y (i.e., f is a quadratic polynomial), then f_xx, f_xy, f_yy are all constants. This means Δ is the same at every critical point — so either all critical points are the same type (all minima, all maxima, or all saddles).

**Two local minima cannot be adjacent on a path**: By the extreme value theorem applied along any path connecting them, there must be a local maximum between two local minima. If your calculation gives two consecutive minima with no maximum between them, there is a computation error.

**Directional derivative via path substitution**: D_û f(x₀,y₀) at a point where f may not be differentiable — use the definition directly:
D_û f = lim[t→0] [f(x₀ + t·u₁, y₀ + t·u₂) − f(x₀,y₀)] / t
where û = (u₁, u₂) is the unit vector. (Do NOT use grad·û formula at suspicious points.)

---

## 6. Implicit Functions & Constrained Optimization (Week 5)

### Implicit Function Theorem
If F(x,y) = 0, F is continuously differentiable, F(x₀,y₀) = 0, and Fᵧ(x₀,y₀) ≠ 0, then near (x₀,y₀) there exists a unique function y = φ(x) such that:
- F(x, φ(x)) = 0
- φ'(x) = -Fₓ/Fᵧ

For F(x,y,z) = 0 with F_z ≠ 0:
- ∂z/∂x = -Fₓ/F_z, ∂z/∂y = -Fᵧ/F_z

**Continuity guarantee**: If F is C¹ and F_z ≠ 0, the IFT guarantees z = z(x,y) is C¹ — so z'_x, z'_y exist and are continuous. By Schwarz, z''_xy = z''_yx wherever the conditions hold.

### Practical Implicit Differentiation — Step by Step
Given F(x,y,z) = 0, find ∂z/∂x (treat y as constant, z as z(x,y)):

1. Differentiate both sides w.r.t. x
2. Apply chain rule: every term involving z gets a z'_x factor
3. Collect all z'_x terms on one side
4. Solve for z'_x

**Key rule for each term**:
- Pure x term: differentiate normally
- Pure y term: = 0 (y is constant)
- Term with z: product/chain rule, contributes z'_x factor
- Mixed term (e.g. xyz): product rule over all three, y constant

**Common error**: forgetting the +1 from d/dy[y] when computing d/dy[z² + y] = 2z·z'_y + **1**

### Higher-Order Implicit Derivatives
To find z''_xx: differentiate z'_x once more w.r.t. x. The result will contain z'_x — **substitute z'_x back in** to express everything in terms of x, y, z.

Similarly for z''_yy and z''_xy.

**Dominant term reminder** (when simplifying): in a sum like t^4 + t^2, as t→0 the **lowest power dominates** (t^2 >> t^4 since t is small). Always identify the lowest-degree term before taking limits.

### ⚠ Common Pitfalls — IFT and y'' (From Practice)

**1. When computing y'', treat y as y(x) — never as a constant.**

Given F(x,y) = 0 and y' = -Fx/Fy, differentiate y' w.r.t. x using the total derivative:

  y'' = d/dx[-Fx/Fy] = -(d/dx[Fx]·Fy - Fx·d/dx[Fy]) / Fy²

Every d/dx on a term that involves y contributes a y' factor via chain rule:
  d/dx[Fy(x,y)] = Fyx + Fyy·y'

The denominator formula for y'' from F(x,y) = 0:
  y'' = -(Fxx·Fy² - 2Fxy·Fx·Fy + Fyy·Fx²) / Fy³

**2. Where does IFT fail? Intersect Fy = 0 with F = 0.**

IFT gives y = φ(x) near (x₀,y₀) only when Fy(x₀,y₀) ≠ 0.  
To find all problem points: solve the system {F(x,y) = 0, Fy(x,y) = 0} simultaneously.

Example: F = x² + xy + y² − 3.  
Fy = 2y + x = 0 → y = -x/2.  
Substitute into F: x² + x(-x/2) + x²/4 − 3 = 3x²/4 − 3 = 0 → x = ±2.  
Problem points: (2, −1) and (−2, 1).

**3. Three-variable IFT: ∂z/∂x has y FIXED — full stop.**

From F(x,y,z) = 0: ∂z/∂x = −Fx/Fz (y held constant).  
Even though x, y, z are globally linked by F = 0, when computing ∂z/∂x we treat y as a constant by definition of partial derivative.  
"All three are codependent" is true globally, but a partial derivative is always with respect to one variable while others are frozen.

**4. Cyclic identity: (∂x/∂y)_z · (∂y/∂z)_x · (∂z/∂x)_y = −1**

This holds for any smooth constraint F(x,y,z) = 0 with all three partial derivatives nonzero.

Proof sketch using IFT:
- (∂z/∂x)_y = −Fx/Fz
- (∂x/∂y)_z = −Fy/Fx
- (∂y/∂z)_x = −Fz/Fy

Product = (−Fy/Fx)·(−Fz/Fy)·(−Fx/Fz) = −1. ∎

Note the −1, not +1. This is why the "chain rule" analogy fails for implicit partials — each partial freezes a different variable, so they do not simply compose.

### Product Rule for n Functions
d/dx [z₁·z₂·…·zₙ] = Σᵢ zᵢ' · ∏_{j≠i} zⱼ

Each of the n terms has exactly one factor differentiated; the rest stay as-is. (Generalization of the standard product rule.)

### Lagrange Multipliers (Constrained Optimization)
**Problem**: Optimize f(x,y) subject to g(x,y) = 0

**Method**: Solve the system:
- ∇f = λ∇g (i.e., fₓ = λgₓ, fᵧ = λgᵧ)
- g(x,y) = 0

For **multiple constraints** g₁ = 0, g₂ = 0:
- ∇f = λ₁∇g₁ + λ₂∇g₂

### Geometric Interpretation of Lagrange Multipliers
At a constrained extremum, ∇f ∥ ∇g: gradients are parallel, so level curves of f and g are tangent. This is because ∇f = λ∇g at the critical point.

### Global (Absolute) Extrema on Compact Domain
**Process** (3 steps):
1. Find all critical points **inside** D where ∇f = 0 (or f has no partials)
2. Find critical points **on each piece of the boundary** — parametrize each piece as a 1-variable problem, or use Lagrange multipliers on the boundary curve
3. Evaluate f at all candidate points, pick largest (global max) and smallest (global min)

**Weierstrass guarantees**: if D is compact (closed + bounded) and f is continuous → both global max and min exist.

**Boundary analysis in practice**: split ∂D into segments/arcs. On each segment, substitute the boundary equation into f, differentiate, find interior critical points of the resulting 1-variable function, then check endpoints of the segment too.

### Sufficient Condition for Constrained Extrema — 2nd Order Test (Lecture 11, §207)
At a critical point M₀ of the Lagrange system, check the sign of d²L restricted by the constraint.

**2-variable case** (one constraint g = 0):
1. Compute L = f + λg, then d²L = L_xx dx² + 2L_xy dx dy + L_yy dy²
2. Differentiate the constraint: g_x dx + g_y dy = 0 → express dy in terms of dx
3. Substitute into d²L and check sign:
   - d²L < 0 → constrained local **maximum**
   - d²L > 0 → constrained local **minimum**
   - d²L changes sign → constrained **saddle** (no extremum)

**3-variable case** (one constraint g = 0): same idea — differentiate g to get a relation among dx, dy, dz, reduce d²L to 2 free differentials, check sign.

**Two constraints** (g₁ = 0, g₂ = 0): eliminate 2 differentials using both dg₁ = 0 and dg₂ = 0, leaving 1 free differential in d²L.

**Key shortcut**: If the constraint set is compact (circle, sphere, ellipse), Weierstrass guarantees max and min exist — just compare all critical values, no 2nd order test needed.

---

## 6.5 Quadric Surfaces (Background for Triple/Surface Integrals)

Standard equations in canonical position:

| Surface | Equation | Key cross-sections |
|---------|----------|--------------------|
| **Ellipsoid** | x²/a² + y²/b² + z²/c² = 1 | All ellipses |
| **One-sheet hyperboloid** | x²/a² + y²/b² − z²/c² = 1 | xOy: ellipse; xOz/yOz: hyperbola |
| **Two-sheet hyperboloid** | x²/a² + y²/b² − z²/c² = −1 | xOy: ellipse only for |z| > c |
| **Elliptic paraboloid** | z = x²/a² + y²/b² | Horizontal: ellipses; vertical: parabolas |
| **Hyperbolic paraboloid** | z = x²/a² − y²/b² | Saddle; horizontal: hyperbola |
| **Elliptic cone** | z² = x²/a² + y²/b² | Horizontal: ellipses |

**Sphere**: special ellipsoid with a = b = c, equation x² + y² + z² = R².

**Cylindrical surface** F(x,y) = 0: any curve in xOy plane extended along the z-axis.

**Why it matters**: quadric surfaces define the boundaries of domains in triple integrals (weeks 8–9) and the surfaces in surface integrals (week 10). Knowing the shape from the equation is essential for setting up limits.

---

## 7. Double Integrals (Weeks 6–7)

### Definition & Properties
∬_D f(x,y) dA

- Linearity: ∬(αf + βg) = α∬f + β∬g
- Additivity over regions: ∬_{D₁∪D₂} = ∬_{D₁} + ∬_{D₂}
- If f ≥ 0, then ∬f dA ≥ 0

### Iterated Integrals & Fubini's Theorem
If f is continuous on D:

**Type I region** (vertical slices): D = {(x,y) : a ≤ x ≤ b, g₁(x) ≤ y ≤ g₂(x)}
∬_D f dA = ∫[a,b] (∫[g₁(x), g₂(x)] f(x,y) dy) dx

**Type II region** (horizontal slices): D = {(x,y) : c ≤ y ≤ d, h₁(y) ≤ x ≤ h₂(y)}
∬_D f dA = ∫[c,d] (∫[h₁(y), h₂(y)] f(x,y) dx) dy

### Change of Variables in Double Integrals
∬_D f(x,y) dA = ∬_D* f(x(u,v), y(u,v)) |J| du dv

**Jacobian**: J = ∂(x,y)/∂(u,v) = |xᵤyᵥ - xᵥyᵤ|

### Polar Coordinates
x = r cos θ, y = r sin θ, **|J| = r**

∬_D f(x,y) dx dy = ∬_D* f(r cos θ, r sin θ) · r dr dθ

**Use when**: Circular symmetry (x² + y² appears), circular/sector domains.

### Switching Order of Integration (Lecture 14)
**When to switch**: the integrand has no antiderivative in the current order (e.g., e^(y/x), sin(x²)), or the region description is simpler the other way.

**Procedure**:
1. Sketch region D from the given limits
2. Describe D by swapping the "outer" and "inner" variables
3. Write the new iterated integral with updated limits

**Classic example**: ∫₀¹(∫ₓ^√x f dy) dx has limits y = x to y = √x (i.e. x² ≤ y ≤ x, 0 ≤ x ≤ 1) → same region as ∫₀¹(∫_{y²}^y f dx) dy

**Pattern for e^(y/x)**: ∫₀¹(∫₀ˣ e^(y/x) dy)dx → switch to ∫₀¹(∫ᵧ¹ e^(y/x) dx)dy (can now integrate w.r.t. x first)

### Applications of Double Integrals (Lecture 14, §20–24)
1. **Area**: S(D) = ∬_D dxdy

2. **Volume** of solid below z = f(x,y) ≥ 0 and above z = 0: V = ∬_D f(x,y) dxdy

3. **Mass** of planar lamina with density ρ(x,y): m = ∬_D ρ(x,y) dxdy

4. **Center of gravity** (centroid if ρ = 1):
   - x₀ = (1/m) ∬_D x · ρ(x,y) dxdy
   - y₀ = (1/m) ∬_D y · ρ(x,y) dxdy

**Triangle centroid shortcut**: for triangle with vertices (x₁,y₁), (x₂,y₂), (x₃,y₃) and uniform density:
   x₀ = (x₁+x₂+x₃)/3,  y₀ = (y₁+y₂+y₃)/3

---

## 8. Line Integrals (Weeks 7–8)

### Line Integral of Type I (Scalar, arc length)
∫_C f ds = ∫[a,b] f(r(t)) · |r'(t)| dt

where |r'(t)| = √(x'(t)² + y'(t)²) [+ z'(t)² in ℝ³]

**Geometric meaning**: If f = 1, gives the arc length of C.

### Line Integral of Type II (Vector field / Work)
∫_C P dx + Q dy = ∫[a,b] [P(r(t))·x'(t) + Q(r(t))·y'(t)] dt

In ℝ³: ∫_C P dx + Q dy + R dz

**Geometric meaning**: Work done by force field F = (P, Q) along C.

**Note**: Type II depends on orientation (direction of traversal). Reversing direction flips the sign.

---

## 9. Green's Theorem & Conservative Fields (Week 8)

### Green's Theorem
If C is a positively oriented (counterclockwise), simple, closed curve bounding region D:

∮_C P dx + Q dy = ∬_D (∂Q/∂x - ∂P/∂y) dA

**Applications**:
- Area of D = ∮_C x dy = -∮_C y dx = ½∮_C (x dy - y dx)
- Convert hard line integrals to double integrals and vice versa

### Conservative (Gradient) Fields
F = (P, Q) is **conservative** if F = ∇φ for some potential φ.

**Equivalent conditions** (on simply connected domain):
1. ∫_C F · dr is **path-independent**
2. ∮_C F · dr = 0 for every closed curve
3. **∂P/∂y = ∂Q/∂x** (necessary condition, sufficient on simply connected domain)

**If conservative**: ∫_C F · dr = φ(endpoint) - φ(startpoint)

**Finding the potential φ**:
1. Integrate: φ = ∫P dx + g(y)
2. Differentiate: ∂φ/∂y = Q, solve for g(y)

### ⚠️ Pitfall: which derivatives, and don't mix x/y
In ∮ P dx + Q dy: **P** is whatever multiplies dx, **Q** is whatever multiplies dy.
Both the conservative test and Green's use the SAME two **cross** partials — P differentiated by y, and Q differentiated by x:
- **P_y** = ∂P/∂y   and   **Q_x** = ∂Q/∂x
- Conservative ⟺ **P_y = Q_x** (equal everywhere)
- Green's integrand = **Q_x − P_y** ("Q before P, each by the *other* variable")

Do NOT use P_x or Q_y — those are the wrong derivatives for both tests.

⚠️ ∮ = 0 has **two** causes — don't confuse them:
(a) field is conservative (P_y = Q_x everywhere), OR
(b) field NOT conservative but ∬_D (Q_x − P_y) dA cancels (e.g. region symmetric in x↔y).
Example (List_9 Q5a): ∮ y²dx + x²dy over triangle (0≤x, 0≤y, x+y≤1). Here P_y=2y, Q_x=2x → NOT conservative, but ∬(2x−2y) over the x↔y-symmetric triangle = 0. Answer 0 is case (b), not (a).

---

## 10. Triple Integrals (Weeks 8–9)

### Over a Rectangular Box
∭_B f dV = ∫∫∫ f(x,y,z) dx dy dz (iterate in any order by Fubini)

### Over a General Domain
Set up iterated integrals with variable bounds (sketch the region!).

### Change of Variables
∭_D f dV = ∭_D* f(x(u,v,w), y(u,v,w), z(u,v,w)) |J| du dv dw

### Cylindrical Coordinates
x = r cos θ, y = r sin θ, z = z, **|J| = r**

∭ f dV = ∫∫∫ f(r cos θ, r sin θ, z) · r dr dθ dz

**Use when**: Circular symmetry in x-y plane (x² + y² appears).

### Spherical Coordinates
x = ρ sin φ cos θ, y = ρ sin φ sin θ, z = ρ cos φ, **|J| = ρ² sin φ**

∭ f dV = ∫∫∫ f(…) · ρ² sin φ dρ dφ dθ

where: ρ ≥ 0, 0 ≤ φ ≤ π, 0 ≤ θ ≤ 2π

**Use when**: Spherical symmetry (x² + y² + z² appears).

---

## 11. Surface Integrals (Week 10)

### Surface Integral of Type I (Scalar)
∬_S f dS = ∬_D f(r(u,v)) · |rᵤ × rᵥ| du dv

For z = g(x,y): dS = √(1 + gₓ² + gᵧ²) dx dy

### Surface Integral of Type II (Flux)
∬_S F · dS = ∬_D F · (rᵤ × rᵥ) du dv

**Flux** of a vector field through a surface.

### Curl and Divergence
**Divergence**: div F = ∇ · F = ∂P/∂x + ∂Q/∂y + ∂R/∂z (scalar)

**Curl**: curl F = ∇ × F = (∂R/∂y - ∂Q/∂z, ∂P/∂z - ∂R/∂x, ∂Q/∂x - ∂P/∂y) (vector)

Determinant formula:
curl F = | ī  j̄  k̄ |
         | ∂/∂x  ∂/∂y  ∂/∂z |
         | P  Q  R |

---

## 12. Gauss & Stokes Theorems (Week 11)

### Divergence Theorem (Gauss)
∯_S F · dS = ∭_V (∇ · F) dV

Converts a **surface integral** (flux through closed surface) into a **volume integral** of the divergence.

### Stokes' Theorem
∮_C F · dr = ∬_S (∇ × F) · dS

Converts a **line integral** around a closed curve into a **surface integral** of the curl.

**Note**: Green's theorem is the 2D special case of Stokes' theorem.

---

## 13. Differential Forms & Generalized Stokes (Week 12)

### Differential Forms
- **0-form**: a function f
- **1-form**: ω = P dx + Q dy + R dz
- **2-form**: ω = P dy∧dz + Q dz∧dx + R dx∧dy
- **3-form**: ω = f dx∧dy∧dz

### Exterior Derivative (d)
- d(0-form) = 1-form (gradient)
- d(1-form) = 2-form (curl)
- d(2-form) = 3-form (divergence)
- **Key property**: d(dω) = 0 (applying d twice gives 0)

### Generalized Stokes' Theorem
∫_∂Ω ω = ∫_Ω dω

This single statement unifies:
| Theorem | Dimension |
|---------|-----------|
| Fundamental Theorem of Calculus | 1D |
| Green's Theorem | 2D |
| (Classical) Stokes' Theorem | 3D (curve ↔ surface) |
| Gauss/Divergence Theorem | 3D (surface ↔ volume) |

---

## Problem-Solving Strategy Cheat Sheet

1. **Improper integral convergence?** → Identify type (I or II). Find asymptotic equivalent near the problematic point. Compare with p-integral.
2. **Domain of f(x,y)?** → Apply all restrictions (√ ≥ 0, ln > 0, denom ≠ 0). Sketch the region.
3. **Multivariable limit?** → First try different paths (to disprove). If all paths agree, try polar coordinates or squeeze theorem (to prove). If polar expression still depends on θ without vanishing → find two paths.
4. **Continuity at (0,0) for piecewise f?** → Check lim[→(0,0)] f = f(0,0). Use polar or squeeze. If limit ≠ defined value → discontinuous.
5. **Differentiability check at (0,0)?** → Step 1: compute fₓ(0,0), fᵧ(0,0) from definition (limit). Step 2: verify lim[Δρ→0] [Δf − fₓΔx − fᵧΔy]/Δρ = 0. If yes → differentiable. Alternatively: if fₓ, fᵧ are continuous at (0,0) → differentiable (Thm 3).
6. **Tangent plane?** → For z = f(x,y): use gradient. For F(x,y,z) = C: use ∇F.
7. **Linear approximation?** → f(a+Δx, b+Δy) ≈ f(a,b) + fₓ(a,b)Δx + fᵧ(a,b)Δy.
8. **Chain rule for composite?** → Draw dependency tree: z depends on x,y; x,y depend on parameters. Multiply along each path and sum.
9. **Local extrema?** → (1) Find critical points: ∇f = 0. (2) Compute A = fₓₓ, B = fₓᵧ, C = fᵧᵧ, Δ = AC−B² at each. (3) Apply second derivative test. For n variables: check Hessian via Sylvester's criterion.
10. **Constrained optimization?** → Lagrange multipliers.
11. **Global extrema on compact domain?** → Check critical points inside + boundary extrema, compare all.
12. **Double integral?** → Sketch the region, choose order of integration (or switch!), consider polar if x²+y². Apply Fubini with correct variable limits.
12a. **Can't integrate inner integral?** → Switch order: re-describe D with outer/inner swapped. Sketch first.
12b. **Area/volume/mass/centroid?** → ∬1 dxdy, ∬f dxdy, ∬ρ dxdy, then divide by mass.
13. **Triple integral?** → Sketch, choose cylindrical (x²+y²) or spherical (x²+y²+z²) if symmetric.
14. **Line integral?** → Type I: parametrize, compute |r'|. Type II: check if conservative first → find potential or use Green's.
15. **Surface integral?** → Parametrize, find cross product. For flux through closed surface → consider Gauss.
16. **Closed curve integral in 3D?** → Consider Stokes' theorem.
