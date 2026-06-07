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
- $(1+x)^\alpha = \sum_{n=0}^\infty \binom{\alpha}{n} x^n$, $|x|<1$

---

## 3. Fourier Series

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

## 4. Fourier Transform

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

## 5. Laplace Transform

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
