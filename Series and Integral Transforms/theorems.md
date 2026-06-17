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
- $\frac{1}{1-x} = \sum_{n=0}^\infty x^n$, $|x|<1$
- $\ln(1+x) = \sum_{n=1}^\infty \frac{(-1)^{n+1} x^n}{n}$, $|x|\le 1$, $x\ne -1$
- $\arctan x = \sum_{n=0}^\infty \frac{(-1)^n x^{2n+1}}{2n+1}$, $|x|\le 1$
- $(1+x)^\alpha = \sum_{n=0}^\infty \binom{\alpha}{n} x^n$, $|x|<1$

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

## 4. Fourier Series

### Definition
For $f$ periodic with period $2L$:
$$f(x) \sim \frac{a_0}{2} + \sum_{n=1}^\infty \left(a_n \cos\frac{n\pi x}{L} + b_n \sin\frac{n\pi x}{L}\right)$$

**Coefficients**:
$$a_n = \frac{1}{L}\int_{-L}^{L} f(x)\cos\frac{n\pi x}{L}\,dx, \quad b_n = \frac{1}{L}\int_{-L}^{L} f(x)\sin\frac{n\pi x}{L}\,dx$$

### Dirichlet Conditions
If $f$ is piecewise smooth and periodic, the Fourier series converges to:
- $f(x)$ at points of continuity
- $\frac{f(x^+)+f(x^-)}{2}$ at jump discontinuities

### Even/Odd Functions
- **Even** $f$: $b_n = 0$ (cosine series only)
- **Odd** $f$: $a_n = 0$ (sine series only)

### Parseval's Identity
$$\frac{1}{L}\int_{-L}^{L}|f(x)|^2\,dx = \frac{a_0^2}{2} + \sum_{n=1}^\infty (a_n^2 + b_n^2)$$

### Complex Form
$$f(x) = \sum_{n=-\infty}^\infty c_n e^{in\pi x/L}, \quad c_n = \frac{1}{2L}\int_{-L}^{L}f(x)e^{-in\pi x/L}\,dx$$

---

## 5. Fourier Transform

### Definition
$$\hat{f}(\xi) = \mathcal{F}\{f\}(\xi) = \int_{-\infty}^\infty f(x)e^{-2\pi i\xi x}\,dx$$
(Convention may vary; also common: $\hat{f}(\omega) = \int f(x)e^{-i\omega x}\,dx$)

### Key Properties
| Property | Formula |
|----------|---------|
| Linearity | $\mathcal{F}\{af+bg\} = a\hat{f}+b\hat{g}$ |
| Shift | $\mathcal{F}\{f(x-a)\} = e^{-2\pi i a\xi}\hat{f}(\xi)$ |
| Scaling | $\mathcal{F}\{f(ax)\} = \frac{1}{|a|}\hat{f}(\xi/a)$ |
| Derivative | $\mathcal{F}\{f'\}(\xi) = 2\pi i\xi\,\hat{f}(\xi)$ |
| Convolution | $\mathcal{F}\{f*g\} = \hat{f}\cdot\hat{g}$ |

### Parseval (Plancherel)
$$\int_{-\infty}^\infty |f(x)|^2\,dx = \int_{-\infty}^\infty |\hat{f}(\xi)|^2\,d\xi$$

---

## 6. Laplace Transform

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
| $e^{at}f(t)$ | $F(s-a)$ |
| $f'(t)$ | $sF(s)-f(0)$ |
| $f''(t)$ | $s^2F(s)-sf(0)-f'(0)$ |

### Convolution Theorem
$$\mathcal{L}\{f*g\} = F(s)\cdot G(s)$$
