# Series and Integral Transforms — Theorems & Formulas

---

## 1. Numerical Series

### Basic Definitions
- Series $\sum_{n=1}^\infty a_n$ **converges** if partial sums $S_N = \sum_{n=1}^N a_n$ have a finite limit.
- **Necessary condition**: if $\sum a_n$ converges, then $a_n \to 0$. (Contrapositive: if $a_n \not\to 0$, the series diverges.)

### Convergence Tests
| Test | Statement |
|------|-----------|
| **Comparison** | If $0 \le a_n \le b_n$ and $\sum b_n$ converges, so does $\sum a_n$. |
| **Limit Comparison** | If $\lim_{n\to\infty} a_n/b_n = L \in (0,\infty)$, both series behave the same. |
| **Ratio (D'Alembert)** | $L = \lim |a_{n+1}/a_n|$: converges if $L<1$, diverges if $L>1$, inconclusive if $L=1$. |
| **Root (Cauchy)** | $L = \limsup |a_n|^{1/n}$: converges if $L<1$, diverges if $L>1$. |
| **Integral** | $\sum_{n=1}^\infty f(n)$ and $\int_1^\infty f(x)\,dx$ converge/diverge together (for $f$ positive, decreasing). |
| **Alternating (Leibniz)** | $\sum (-1)^n b_n$ converges if $b_n \ge 0$, $b_n \searrow 0$. |
| **Dirichlet** | $\sum a_n b_n$ converges if partial sums of $a_n$ are bounded and $b_n \searrow 0$. |
| **Abel** | $\sum a_n b_n$ converges if $\sum a_n$ converges and $b_n$ is monotone and bounded. |

### Absolute vs Conditional Convergence
- **Absolutely convergent**: $\sum |a_n| < \infty$ (implies convergent).
- **Conditionally convergent**: $\sum a_n$ converges but $\sum |a_n|$ diverges.
- These are **mutually exclusive and exhaustive** for convergent series.

### Workflow for Classifying Alternating Series
1. Apply ratio/root test to $\sum |a_n|$:
   - $L < 1$: **absolutely convergent** — done.
   - $L > 1$: **diverges** — done.
   - $L = 1$: inconclusive — go to step 2.
2. Check convergence of $\sum a_n$ (Leibniz, Dirichlet, Abel...):
   - Converges + $\sum|a_n|$ diverges: **conditionally convergent**.
   - Diverges: **diverges**.

> **Common mistake**: Leibniz's theorem only proves *convergence* — it does NOT classify the series as conditional. The category is determined solely by whether $\sum |a_n|$ converges.

> **Common mistake**: The comparison test requires positive terms. Do not compare sums of alternating series by term size.

### p-Series
$\sum_{n=1}^\infty \frac{1}{n^p}$ converges iff $p > 1$.

### Key Ordering (growth rates)
$$\frac{1}{n^{1+\varepsilon}} < \frac{1}{n} < \frac{1}{\ln n} \quad \text{for large } n, \; \varepsilon > 0$$
- $\sum 1/n^{1+\varepsilon}$: converges (p-series)
- $\sum 1/n$: diverges (harmonic)
- $\sum 1/\ln n$: diverges (bigger than harmonic)

Exponential beats any polynomial: $c^n / n^k \to \infty$ for $c > 1$, any fixed $k$. No closed-form crossing point (transcendental inequality).

---

## 2. Power Series

### Radius of Convergence
$\sum_{n=0}^\infty c_n (x-a)^n$ converges absolutely for $|x-a| < R$ where:
$$R = \frac{1}{\limsup_{n\to\infty} |c_n|^{1/n}} \quad \text{(Cauchy–Hadamard)}$$
Also: $R = \lim_{n\to\infty} |c_n/c_{n+1}|$ when the limit exists.

### Taylor/Maclaurin Series
$$f(x) = \sum_{n=0}^\infty \frac{f^{(n)}(a)}{n!}(x-a)^n$$

**Common series** (centered at 0):
- $e^x = \sum_{n=0}^\infty \frac{x^n}{n!}$, $R=\infty$
- $\sin x = \sum_{n=0}^\infty \frac{(-1)^n x^{2n+1}}{(2n+1)!}$, $R=\infty$
- $\cos x = \sum_{n=0}^\infty \frac{(-1)^n x^{2n}}{(2n)!}$, $R=\infty$
- $\sinh x = \sum_{n=0}^\infty \frac{x^{2n+1}}{(2n+1)!}$, $R=\infty$ (same as $\sin$ but no $(-1)^n$)
- $\cosh x = \sum_{n=0}^\infty \frac{x^{2n}}{(2n)!}$, $R=\infty$ (same as $\cos$ but no $(-1)^n$)
- $\frac{1}{1-x} = \sum_{n=0}^\infty x^n$, $|x|<1$
- $\ln(1+x) = \sum_{n=1}^\infty \frac{(-1)^{n+1} x^n}{n}$, $|x|\le 1$, $x\ne -1$
- $\arctan x = \sum_{n=0}^\infty \frac{(-1)^n x^{2n+1}}{2n+1}$, $|x|\le 1$
- $(1+x)^\alpha = \sum_{n=0}^\infty \binom{\alpha}{n} x^n$, $|x|<1$

### Hyperbolic Functions

**Definitions:**
$$\sinh x = \frac{e^x - e^{-x}}{2}, \qquad \cosh x = \frac{e^x + e^{-x}}{2}$$

**Decomposition of exponential:**
$$e^x = \cosh x + \sinh x$$

**Key identities:**
- $\cosh^2 x - \sinh^2 x = 1$
- $(\sinh x)' = \cosh x$, $\quad(\cosh x)' = \sinh x$
- $\sinh(-x) = -\sinh x$ (odd), $\quad\cosh(-x) = \cosh x$ (even)

**Euler's formula:**
$$e^{i\theta} = \cos\theta + i\sin\theta, \qquad e^{-i\theta} = \cos\theta - i\sin\theta$$

**All four functions expressed via e:**

| Function | Exponential form |
|----------|-----------------|
| cos θ | (e^{iθ} + e^{-iθ}) / 2 |
| sin θ | (e^{iθ} − e^{-iθ}) / (2i) |
| cosh x | (eˣ + e⁻ˣ) / 2 |
| sinh x | (eˣ − e⁻ˣ) / 2 |

**Cross-relations** (substituting ix swaps trig ↔ hyperbolic):

| ix into trig | ix into hyperbolic |
|---|---|
| cos(ix) = cosh x | cosh(ix) = cos x |
| sin(ix) = i sinh x | sinh(ix) = i sin x |

Trig and hyperbolic are the same function on different axes of the complex plane. Trig oscillates along the imaginary axis (e^{iθ}); hyperbolic grows/decays along the real axis (eˣ). Multiplying the argument by i rotates between them.

**Complex argument formulas** (for Fourier calculations):
$$\sinh(a + ib) = \sinh(a)\cos(b) + i\cosh(a)\sin(b)$$
$$\cosh(a + ib) = \cosh(a)\cos(b) + i\sinh(a)\sin(b)$$

**Key simplification for integer $n$** (used constantly in complex Fourier):
$$\sinh(a - in\pi) = (-1)^n \sinh(a), \qquad \cosh(a - in\pi) = (-1)^n \cosh(a)$$
because $\cos(n\pi) = (-1)^n$ and $\sin(n\pi) = 0$.

### Taylor's Theorem with Remainder

**Lagrange remainder form:**
$$f(x) = \sum_{k=0}^n \frac{f^{(k)}(a)}{k!}(x-a)^k + R_n(x), \qquad R_n(x) = \frac{f^{(n+1)}(c)}{(n+1)!}(x-a)^{n+1}$$
for some $c$ strictly between $a$ and $x$.

**Error bound:**
$$|R_n(x)| \leq \frac{M_{n+1}}{(n+1)!}|x-a|^{n+1}, \qquad M_{n+1} = \sup\bigl|f^{(n+1)}\bigr| \text{ on the interval.}$$

**Workflow for "how many terms" questions:** bound $M_{n+1}$, then solve $\frac{M_{n+1}}{(n+1)!}|x-a|^{n+1} < \varepsilon$ for the smallest $n$.

### Computing Limits via Taylor Series

To find $\lim_{x\to 0} g(x)$: expand numerator and denominator as power series, cancel common powers of $x$, read off the limit from leading terms.

For $\lim_{x\to 0} \frac{d^k}{dx^k}[f(x)]$: write $f(x) = \sum a_n x^n$, then $f^{(k)}(0) = k!\,a_k$.

---

## 3. Uniform Convergence

### Sequences of Functions

- **Pointwise**: $f_n \to f$ if for each $x \in D$, $f_n(x) \to f(x)$.
- **Uniform** ($f_n \rightrightarrows f$): $\sup_{x \in D}|f_n(x) - f(x)| \to 0$.

Uniform $\Rightarrow$ pointwise. Pointwise $\not\Rightarrow$ uniform in general.

**Standard method:** Compute $M_n = \sup_{x\in D}|f_n(x)-f(x)|$ (find max by differentiation or AM–GM). If $M_n \to 0$: uniform; if not: not uniform.

**Negation:** $f_n \not\rightrightarrows f$ iff $\exists\,\varepsilon>0$ and $x_n \in D$ with $|f_n(x_n) - f(x_n)| \geq \varepsilon$. Typical choice: $x_n = \arg\max |f_n - f|$.

> **Classic example:** $f_n(x) = x^n$ on $[0,1)$ → pointwise limit 0, but $\sup = 1 \not\to 0$. Not uniform. On $[0,r]$, $r<1$: $\sup = r^n \to 0$. Uniform.

### Properties Preserved by Uniform Convergence

| Property | Requirement |
|----------|-------------|
| **Continuity of limit** | $f_n$ continuous + $f_n \rightrightarrows f$ → $f$ continuous |
| **Term-by-term integration** | $f_n \rightrightarrows f$ on $[a,b]$ → $\int_a^b f_n \to \int_a^b f$ |
| **Term-by-term differentiation** | $f_n \to f$ pointwise, $f_n' \rightrightarrows g$ uniformly → $f' = g$ |

> **Counterexample (pointwise ≠ enough):** $f_n(x) = n^2 x\,e^{-nx}$ on $[0,1]$ → $f_n \to 0$ pointwise, but $\int_0^1 f_n = 1 \not\to 0$.

### Series of Functions

$\sum u_n(x)$ **converges uniformly** on $D$ if partial sums $S_N(x) = \sum_{n=1}^N u_n(x)$ converge uniformly.

| Test | Statement |
|------|-----------|
| **Weierstrass M-test** | $\|u_n(x)\| \leq M_n$ on $D$ and $\sum M_n < \infty$ → $\sum u_n(x)$ converges uniformly and absolutely. |
| **Dirichlet (uniform)** | $\sum a_n(x)b_n(x)$ converges uniformly if partial sums of $a_n(x)$ are uniformly bounded AND $b_n(x) \searrow 0$ uniformly. |
| **Abel (uniform)** | $\sum a_n(x)b_n(x)$ converges uniformly if $\sum a_n(x)$ converges uniformly AND $b_n(x)$ is monotone, uniformly bounded. |

**Power series on compact sub-intervals:** $\sum c_n x^n$ with radius of convergence $R$ converges uniformly on $[-r,r]$ for any $r < R$, but generally **not** on all of $(-R,R)$.

**Properties:** same as for sequences — continuity, integration, and differentiation (the last requires $\sum u_n'$ to also converge uniformly).

---

## 4. Inner Product Spaces & L² Norm

### Inner Product on $L^2[-L,L]$

The standard inner product used in this course:
$$\langle f, g \rangle = \int_{-L}^{L} f(x)\,\overline{g(x)}\,dx$$

For real-valued functions this is just $\int_{-L}^L f(x)g(x)\,dx$.

**Norm:** $\|f\| = \sqrt{\langle f,f\rangle} = \sqrt{\int_{-L}^L |f(x)|^2\,dx}$

### Orthogonality of the Trig Basis

The functions $\{1,\,\cos(n\pi x/L),\,\sin(n\pi x/L)\}_{n\ge 1}$ are orthogonal on $[-L,L]$:

$$\int_{-L}^{L} \cos\frac{n\pi x}{L}\cos\frac{m\pi x}{L}\,dx = \begin{cases} 2L & n=m=0 \\ L & n=m\neq 0 \\ 0 & n\neq m \end{cases}$$

$$\int_{-L}^{L} \sin\frac{n\pi x}{L}\sin\frac{m\pi x}{L}\,dx = \begin{cases} L & n=m\neq 0 \\ 0 & \text{otherwise} \end{cases}$$

$$\int_{-L}^{L} \sin\frac{n\pi x}{L}\cos\frac{m\pi x}{L}\,dx = 0 \quad \text{for all } n,m$$

The Fourier coefficients are exactly the projections onto these basis functions:
$$a_n = \frac{\langle f,\cos(n\pi x/L)\rangle}{\|\cos(n\pi x/L)\|^2} \cdot 1 = \frac{1}{L}\int_{-L}^L f(x)\cos\frac{n\pi x}{L}\,dx$$

### Bessel's Inequality

For any $f \in L^2[-L,L]$, the partial Fourier sums satisfy:
$$\frac{a_0^2}{2} + \sum_{n=1}^N (a_n^2 + b_n^2) \le \frac{1}{L}\|f\|^2 = \frac{1}{L}\int_{-L}^L |f(x)|^2\,dx$$

This holds for every $N$, so the series of squares converges.

### Convergence in Norm (L² Convergence)

$S_N \to f$ **in norm** means:
$$\|S_N - f\| = \sqrt{\int_{-L}^L |S_N(x) - f(x)|^2\,dx} \;\to\; 0$$

**Theorem:** If $f \in L^2[-L,L]$, its Fourier series $S_N$ converges to $f$ **in norm**, even if pointwise convergence fails at some points.

**Parseval's identity is exactly the statement that $S_N \to f$ in norm** (Bessel becomes equality):
$$\frac{1}{L}\int_{-L}^L |f(x)|^2\,dx = \frac{a_0^2}{2} + \sum_{n=1}^\infty (a_n^2 + b_n^2)$$

> **Convergence relations (on a bounded interval):** uniform ⇒ pointwise, and uniform ⇒ L² norm. Neither pointwise nor L² norm implies the other.
> - Pointwise ⇏ L²: fₙ = √n · 1_{[0,1/n]} → 0 pointwise, but ||fₙ|| = 1.
> - L² ⇏ pointwise: the "sliding bump" sequence converges to 0 in L² but fails to converge at every point.

---

## 5. Fourier Series

### Definition
For $f$ periodic with period $2L$:
$$f(x) \sim \frac{a_0}{2} + \sum_{n=1}^\infty \left(a_n \cos\frac{n\pi x}{L} + b_n \sin\frac{n\pi x}{L}\right)$$

**Coefficients:**
$$a_n = \frac{1}{L}\int_{-L}^{L} f(x)\cos\frac{n\pi x}{L}\,dx, \qquad b_n = \frac{1}{L}\int_{-L}^{L} f(x)\sin\frac{n\pi x}{L}\,dx$$

Note: the integral can be taken over any full period, not only $[-L,L]$.

### Dirichlet Conditions (Pointwise Convergence)
If $f$ is piecewise smooth and periodic, the Fourier series converges to:
- $f(x)$ at points of continuity
- $\dfrac{f(x^+)+f(x^-)}{2}$ at jump discontinuities

### Even/Odd Functions
- **Even** $f$: $b_n = 0$ (cosine series only); $a_n = \dfrac{2}{L}\displaystyle\int_0^L f(x)\cos\dfrac{n\pi x}{L}\,dx$
- **Odd** $f$: $a_n = 0$ (sine series only); $b_n = \dfrac{2}{L}\displaystyle\int_0^L f(x)\sin\dfrac{n\pi x}{L}\,dx$

### Half-Period Extensions (Sine and Cosine Series on $[0,L]$)

Given $f$ defined only on $[0,L]$, extend it to $[-L,L]$ and then periodically:

**Cosine series** (even extension):
$$f(x) \sim \frac{a_0}{2} + \sum_{n=1}^\infty a_n \cos\frac{n\pi x}{L}, \qquad a_n = \frac{2}{L}\int_0^L f(x)\cos\frac{n\pi x}{L}\,dx, \quad b_n = 0$$

**Sine series** (odd extension):
$$f(x) \sim \sum_{n=1}^\infty b_n \sin\frac{n\pi x}{L}, \qquad b_n = \frac{2}{L}\int_0^L f(x)\sin\frac{n\pi x}{L}\,dx, \quad a_n = 0$$

> Both representations converge to $f(x)$ on $(0,L)$ at points of continuity. At the endpoints: cosine series → $f(0^+)$, $f(L^-)$; sine series → 0 at both endpoints (forced by odd extension).

### Shift Property

If $f$ has period $2\pi$ with coefficients $a_n,b_n$, and $g(x) = f(x+h)$, then $g$ has coefficients:
$$A_n = a_n\cos(nh) + b_n\sin(nh), \qquad B_n = -a_n\sin(nh) + b_n\cos(nh)$$

**Special case $h = \pi$:** $\cos(n\pi) = (-1)^n$, $\sin(n\pi) = 0$, so:
$$A_n = (-1)^n a_n, \qquad B_n = (-1)^n b_n, \qquad A_0 = a_0$$

$A_0 = a_0$ because integrating a periodic function over any full period gives the same value — the shift just moves the window, not the total area.

### Parseval's Identity
$$\frac{1}{L}\int_{-L}^{L}|f(x)|^2\,dx = \frac{a_0^2}{2} + \sum_{n=1}^\infty (a_n^2 + b_n^2)$$

**Workflow — computing numerical series via Parseval:**
1. Find the Fourier series of a suitable $f$.
2. Write out Parseval's identity.
3. The left side is a computable integral; the right side gives the desired sum.

### Computing π^n/m via Fourier Series

Two methods produce classical identities involving powers of π.

**Method 1 — Substituting a specific x:**
Substitute x = x₀ into the converged Fourier series. Useful values:
- x = 0: kills all sin terms; cos(0) = 1, easy.
- x = π: cos(nπ) = (-1)ⁿ, sin(nπ) = 0.
- x = π/2: sin(nπ/2) cycles 1,0,−1,0,… — extracts odd-n sub-series.

**Example** — f(x) = x² on [−π,π]:

x² ~ π²/3 + Σ 4(-1)ⁿ/n² cos(nx)

Substitute x = π: π² = π²/3 + 4Σ 1/n²  →  **Σ 1/n² = π²/6**

Substitute x = 0: 0 = π²/3 + 4Σ(-1)ⁿ/n²  →  **Σ (-1)^(n+1)/n² = π²/12**

**Method 2 — Parseval:**
Compute (1/L)∫|f|² and equate to a₀²/2 + Σ(aₙ² + bₙ²).

**Example** (same series):
(1/π)∫x⁴ dx = 2π⁴/5 = (2π²/3)²/2 + 16Σ1/n⁴  →  **Σ 1/n⁴ = π⁴/90**

**Reference table:**

| Series | Value |
|--------|-------|
| Σ 1/n² | π²/6 |
| Σ (-1)^(n+1)/n² | π²/12 |
| Σ 1/(2n+1)² (n≥0) | π²/8 |
| Σ 1/n⁴ | π⁴/90 |
| Σ 1/n⁶ | π⁶/945 |
| Σ (-1)ⁿ/(2n+1) (n≥0) | π/4 |
| Σ (-1)ⁿ/(2n+1)³ (n≥0) | π³/32 |

> **Note:** Σ 1/(2n+1)² = π²/8 follows from separating Σ 1/n² = π²/6 into even and odd parts: even part = (1/4)·(π²/6), so odd part = π²/6 − π²/24 = π²/8.

### Complex Fourier Series

**Definition:**
$$f(x) = \sum_{n=-\infty}^\infty c_n\, e^{in\pi x/L}, \qquad c_n = \frac{1}{2L}\int_{-L}^{L}f(x)\,e^{-in\pi x/L}\,dx$$

**Relationship to real coefficients ($n \ge 1$):**
$$c_0 = \frac{a_0}{2}, \qquad c_n = \frac{a_n - ib_n}{2}, \qquad c_{-n} = \frac{a_n + ib_n}{2}$$

Inverse: $a_n = c_n + c_{-n}$, $\quad b_n = i(c_n - c_{-n})$.

**Quick route:** if you already have the real series, read off $c_n$ using the formulas above without recomputing integrals.

**Parseval for complex series:**
$$\frac{1}{2L}\int_{-L}^L |f(x)|^2\,dx = \sum_{n=-\infty}^\infty |c_n|^2$$

Equivalently, for $L=\pi$: $\displaystyle\frac{1}{2\pi}\int_{-\pi}^\pi |f|^2\,dx = \sum_{n=-\infty}^\infty |c_n|^2$.

**Useful for integrals of the form** $\displaystyle\int_{-\pi}^\pi \left|\sum_{n=1}^\infty \frac{e^{inx}}{2^n}\right|^2 dx$: recognize as $\sum|c_n|^2$ and apply Parseval.

### Technique: Complex Fourier of $e^{ax}$ on $[-L,L]$

$$c_n = \frac{1}{2L}\int_{-L}^L e^{ax}e^{-in\pi x/L}\,dx = \frac{1}{2L}\cdot\frac{e^{(a-in\pi/L)x}}{a-in\pi/L}\Bigg|_{-L}^{L}$$

The numerator at the limits:
$$e^{(a-in\pi/L)L} - e^{-(a-in\pi/L)L} = e^{aL}e^{-in\pi} - e^{-aL}e^{in\pi} = (-1)^n(e^{aL}-e^{-aL}) = 2(-1)^n\sinh(aL)$$

Therefore:
$$\boxed{c_n = \frac{(-1)^n \sinh(aL)}{L(a - in\pi/L)} = \frac{(-1)^n \sinh(aL)(a + in\pi/L)}{L(a^2 + n^2\pi^2/L^2)}}$$

From this: $a_n = \dfrac{2(-1)^n\sinh(aL)\cdot a}{L(a^2+n^2\pi^2/L^2)}$, $\quad b_n = \dfrac{2(-1)^n\sinh(aL)\cdot n\pi/L}{L(a^2+n^2\pi^2/L^2)}$.

**Even/odd shortcut:** write $e^{ax} = \cosh(ax) + \sinh(ax)$. Since $\cosh$ is even it gives only $a_n$; since $\sinh$ is odd it gives only $b_n$.

### Computing Numerical Sums via Fourier

Substitute a specific value of $x$ into the Fourier series to extract the value of the sum:
- At a point of continuity, $S(x) = f(x)$.
- At a jump, $S(x) = \frac{f(x^+)+f(x^-)}{2}$.

Useful values: $x=0$, $x=\pi$, $x=L$ (endpoint), $x=\pi/2$.

---

## 6. Fourier Transform

### Definition (ω convention)
$$\hat{f}(\omega) = \mathcal{F}\{f\}(\omega) = \int_{-\infty}^\infty f(x)\,e^{-i\omega x}\,dx$$

**Inverse transform:**
$$f(x) = \frac{1}{2\pi}\int_{-\infty}^\infty \hat{f}(\omega)\,e^{i\omega x}\,d\omega$$

> Alternative convention (symmetric): replace $e^{-i\omega x}$ by $e^{-2\pi i\xi x}$, then the inverse has no $1/(2\pi)$ factor. Check which convention is used.

### Fourier Integral Representation

Any $f \in L^1(\mathbb{R}) \cap L^2(\mathbb{R})$ can be written as:
$$f(x) = \frac{1}{2\pi}\int_{-\infty}^\infty \hat{f}(\omega)\,e^{i\omega x}\,d\omega = \frac{1}{2\pi}\int_{-\infty}^\infty \left[\int_{-\infty}^\infty f(t)e^{-i\omega t}\,dt\right]e^{i\omega x}\,d\omega$$

**Real form** (for real $f$):
$$f(x) = \int_0^\infty \bigl[A(\omega)\cos(\omega x) + B(\omega)\sin(\omega x)\bigr]\,d\omega$$
$$A(\omega) = \frac{1}{\pi}\int_{-\infty}^\infty f(t)\cos(\omega t)\,dt, \qquad B(\omega) = \frac{1}{\pi}\int_{-\infty}^\infty f(t)\sin(\omega t)\,dt$$

### Key Properties
| Property | Formula |
|----------|---------|
| Linearity | $\mathcal{F}\{af+bg\} = a\hat{f}+b\hat{g}$ |
| Shift (time) | $\mathcal{F}\{f(x-a)\}(\omega) = e^{-i\omega a}\hat{f}(\omega)$ |
| Shift (freq) / Modulation | $\mathcal{F}\{e^{iax}f(x)\}(\omega) = \hat{f}(\omega-a)$ |
| Scaling | $\mathcal{F}\{f(ax)\}(\omega) = \dfrac{1}{|a|}\hat{f}\!\left(\dfrac{\omega}{a}\right)$ |
| Derivative | $\mathcal{F}\{f'(x)\}(\omega) = i\omega\,\hat{f}(\omega)$ |
| Multiplication by $x$ | $\mathcal{F}\{xf(x)\}(\omega) = i\,\dfrac{d\hat{f}}{d\omega}(\omega)$ |
| Convolution | $\mathcal{F}\{f*g\} = \hat{f}\cdot\hat{g}$ |
| Duality | $\mathcal{F}\{\hat{f}(x)\}(\omega) = 2\pi f(-\omega)$ |
| Even $f$ | $\hat{f}(\omega)$ is real |
| Odd $f$ | $\hat{f}(\omega)$ is purely imaginary |

**Cosine modulation** (useful for multiplying by $\cos$ or $\sin$):
$$\mathcal{F}\{f(x)\cos(ax)\}(\omega) = \frac{\hat{f}(\omega-a)+\hat{f}(\omega+a)}{2}$$
$$\mathcal{F}\{f(x)\sin(ax)\}(\omega) = \frac{\hat{f}(\omega-a)-\hat{f}(\omega+a)}{2i}$$

### Common Transform Pairs ($\hat{f}(\omega) = \int f(x)e^{-i\omega x}\,dx$)

| $f(x)$ | $\hat{f}(\omega)$ | Notes |
|--------|-------------------|-------|
| $e^{-ax}\,\mathbf{1}_{x\ge 0}$ | $\dfrac{1}{a+i\omega}$ | $a>0$ |
| $e^{-a|x|}$ | $\dfrac{2a}{a^2+\omega^2}$ | $a>0$, even function |
| $\dfrac{1}{x^2+a^2}$ | $\dfrac{\pi}{a}e^{-a|\omega|}$ | $a>0$ |
| $e^{-ax^2}$ | $\sqrt{\dfrac{\pi}{a}}\,e^{-\omega^2/(4a)}$ | $a>0$, Gaussian maps to Gaussian |
| $\mathbf{1}_{|x|\le L}$ | $\dfrac{2\sin(L\omega)}{\omega}$ | rect function |
| $\sin(ax)\,\mathbf{1}_{|x|\le\pi}$ | computed via Euler | combine shift property |

### Parseval (Plancherel)
$$\int_{-\infty}^\infty |f(x)|^2\,dx = \frac{1}{2\pi}\int_{-\infty}^\infty |\hat{f}(\omega)|^2\,d\omega$$

---

## 7. Laplace Transform

### Definition
$$\mathcal{L}\{f\}(s) = F(s) = \int_0^\infty f(t)e^{-st}\,dt$$

### Common Transforms
| $f(t)$ | $F(s)$ |
|--------|--------|
| $1$ | $1/s$ |
| $t^n$ | $n!/s^{n+1}$ |
| $e^{at}$ | $1/(s-a)$ |
| $\sin(bt)$ | $b/(s^2+b^2)$ |
| $\cos(bt)$ | $s/(s^2+b^2)$ |
| $\sinh(bt)$ | $b/(s^2-b^2)$, $s>|b|$ |
| $\cosh(bt)$ | $s/(s^2-b^2)$, $s>|b|$ |
| $e^{at}f(t)$ | $F(s-a)$ |
| $f'(t)$ | $sF(s)-f(0)$ |
| $f''(t)$ | $s^2F(s)-sf(0)-f'(0)$ |

### Convolution Theorem
$$\mathcal{L}\{f*g\} = F(s)\cdot G(s)$$
