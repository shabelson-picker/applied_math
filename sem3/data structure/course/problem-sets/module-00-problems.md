# Problem set — Module 0 (Foundations)

Foundations only stick if you *use* them. These are short and mechanical on purpose — the
goal is fluency, not cleverness. The two that matter most for what's coming: **P4**
(telescoping) and **P8** (linearity of expectation). Solutions at the bottom.

---

## Problems

**P1 (sum basics).** Evaluate, using closed forms (not by adding term-by-term):
(a) \(\displaystyle\sum_{k=1}^{100} k\)  (b) \(\displaystyle\sum_{k=1}^{n} (2k - 1)\)
 (c) \(\displaystyle\sum_{k=0}^{10} 2^k\).

**P2 (reindexing).** Rewrite \(\displaystyle\sum_{k=3}^{n} a_k\) as a sum whose index starts at
\(0\). Then check your shift on \(\displaystyle\sum_{k=3}^{5} k\) by evaluating both forms.

**P3 (splitting a range).** Given \(\displaystyle\sum_{k=1}^{2n} k = \frac{2n(2n+1)}{2}\), use
range-splitting to find \(\displaystyle\sum_{k=n+1}^{2n} k\) (the "second half"). Simplify.

**P4 (telescoping — important).** Evaluate \(\displaystyle\sum_{k=1}^{n}\left[\frac1k - \frac{1}{k+1}\right]\)
by telescoping. Then explain in one line how this is the same maneuver as "divide by \(N(N+1)\)"
in the Module 1 quicksort solve.

**P5 (permutations vs combinations).**
(a) How many ways to seat 6 people in a row?
(b) How many ways to choose a committee of 3 from those 6?
(c) How many ways to choose 3 of the 6 and assign them president/VP/treasurer?
State which rule (permutation or combination) each uses and why.

**P6 (binomial coefficients).**
(a) Compute \(\binom{6}{2}\) and \(\binom{6}{4}\); confirm the symmetry identity.
(b) Verify Pascal's rule for \(\binom{5}{2}\): show it equals \(\binom{4}{1} + \binom{4}{2}\).
(c) Use the binomial theorem to expand \((x + 1)^4\).

**P7 (uniform probability).** Roll two fair six-sided dice.
(a) Size of the sample space?  (b) \(P(\text{sum} = 7)\)?  (c) \(P(\text{sum} = 12)\)?
(d) \(P(\text{the two dice show different values})\)?

**P8 (linearity of expectation — important).**
(a) In a uniformly random permutation of \(1,\dots,n\), let \(X\) be the number of fixed points.
Using indicators, show \(E[X] = 1\). (Reproduce the notes' argument from scratch.)
(b) Now the payoff shape: let \(Y\) be the number of **inversions** — pairs \((i,j)\) with
\(i < j\) but the element at position \(i\) is larger than the one at position \(j\). Using one
indicator per pair and linearity, show \(E[Y] = \tfrac12\binom{n}{2} = \tfrac{n(n-1)}{4}\).
(Hint: for a random pair, which order is it in, and with what probability?)

**P9 (harmonic numbers).** (a) Compute \(H_5\) as an exact fraction. (b) Estimate
\(H_{1{,}000{,}000}\) using \(H_n \approx \ln n + \gamma\). (c) True or false: \(H_n\) is bounded
above as \(n \to \infty\). Justify.

**P10 (logs & Big-O).** (a) Write \(\lg n\) in terms of \(\ln n\) (give the constant).
(b) Explain in one sentence why "\(f = O(n\log n)\)" doesn't tell you the base of the log, but
"\(f \sim 2n\ln n\)" does tell you everything. (c) Which is a stronger statement about \(f\):
\(f \sim n^2\), or \(f = O(n^2)\)?

---

## Solutions

**P1.**
(a) \(\sum k = \tfrac{100\cdot 101}{2} = 5050.\)
(b) \(\displaystyle\sum_{k=1}^{n}(2k-1) = 2\sum k - \sum 1 = 2\cdot\tfrac{n(n+1)}{2} - n = n(n+1) - n = n^2.\)
(The sum of the first \(n\) odd numbers is \(n^2\) — a classic.)
(c) Geometric with \(r=2\): \(\displaystyle\sum_{k=0}^{10} 2^k = \frac{2^{11}-1}{2-1} = 2048 - 1 = 2047.\)

**P2.** Let \(j = k - 3\) (so \(k = j+3\)); as \(k\) runs \(3,\dots,n\), \(j\) runs \(0,\dots,n-3\):
\(\displaystyle\sum_{k=3}^{n} a_k = \sum_{j=0}^{n-3} a_{j+3}.\) Check on \(a_k = k,\ n=5\):
original \(3+4+5 = 12\); shifted \(\sum_{j=0}^{2}(j+3) = 3+4+5 = 12.\) ✓

**P3.** \(\displaystyle\sum_{k=n+1}^{2n} k = \sum_{k=1}^{2n} k - \sum_{k=1}^{n} k
= \frac{2n(2n+1)}{2} - \frac{n(n+1)}{2} = \frac{(4n^2+2n)-(n^2+n)}{2} = \frac{3n^2+n}{2} = \frac{n(3n+1)}{2}.\)

**P4.** Telescoping: consecutive terms cancel, leaving first minus last:

$$\sum_{k=1}^{n}\left[\frac1k - \frac{1}{k+1}\right]
= \left(1 - \tfrac12\right) + \left(\tfrac12 - \tfrac13\right) + \dots + \left(\tfrac1n - \tfrac{1}{n+1}\right)
= 1 - \frac{1}{n+1} = \frac{n}{n+1}.$$

Same maneuver as Module 1: dividing the quicksort recurrence by \(N(N+1)\) rewrote it as
\(T_N - T_{N-1} = \tfrac{2}{N+1}\), i.e. a difference of consecutive terms — so summing
telescoped it down to a harmonic sum. Telescoping = "make it a difference, then collapse."

**P5.**
(a) Order matters (a row) → permutation of all 6 = \(6! = 720.\)
(b) Order doesn't matter (a plain committee) → combination = \(\binom{6}{3} = 20.\)
(c) Choose 3 *and* order them into distinct roles → ordered selection = \(6\cdot 5\cdot 4 = 120\)
(\(= \binom{6}{3}\cdot 3! = 20\cdot 6\)). Equivalent view: pick the committee (20), then assign
3 roles (\(3! = 6\)).

**P6.**
(a) \(\binom{6}{2} = \tfrac{6!}{2!4!} = 15\); \(\binom{6}{4} = \tfrac{6!}{4!2!} = 15.\) Equal ✓
(symmetry: \(k=2\) vs \(n-k=4\)).
(b) \(\binom{5}{2} = 10\); \(\binom{4}{1} + \binom{4}{2} = 4 + 6 = 10.\) ✓
(c) \((x+1)^4 = \sum_k \binom{4}{k} x^k = x^4 + 4x^3 + 6x^2 + 4x + 1\) (coefficients = Pascal row \(n=4\)).

**P7.** (a) \(|\Omega| = 6\cdot 6 = 36\) equally likely ordered pairs.
(b) Sum 7: \((1,6)(2,5)(3,4)(4,3)(5,2)(6,1)\) = 6 outcomes → \(\tfrac{6}{36} = \tfrac16.\)
(c) Sum 12: only \((6,6)\) = 1 → \(\tfrac{1}{36}.\)
(d) Different values: complement of "same" (6 doubles), so \(\tfrac{36-6}{36} = \tfrac{30}{36} = \tfrac56.\)

**P8.**
(a) \(X = \sum_{i=1}^{n} \mathbf{1}_i\), \(\mathbf{1}_i = [\text{item } i \text{ is fixed}]\).
Each item is equally likely to occupy any of the \(n\) positions, so \(P(\mathbf{1}_i=1) = \tfrac1n\).
Linearity: \(E[X] = \sum \tfrac1n = 1\) — independent of \(n\).
(b) \(Y = \sum_{i<j} \mathbf{1}_{ij}\), one indicator per pair of positions,
\(\mathbf{1}_{ij} = [\text{pair is out of order}]\). There are \(\binom{n}{2}\) pairs. For a
uniformly random permutation, any given pair is equally likely to be in-order or out-of-order,
so \(P(\mathbf{1}_{ij}=1) = \tfrac12\). Linearity:
\(E[Y] = \binom{n}{2}\cdot\tfrac12 = \tfrac{n(n-1)}{4}.\) (This is the average number of
inversions — and the average cost of insertion sort. You just did a Chapter-7 result with
Module-0 tools.)

**P9.** (a) \(H_5 = 1 + \tfrac12 + \tfrac13 + \tfrac14 + \tfrac15 = \tfrac{60+30+20+15+12}{60} = \tfrac{137}{60} \approx 2.2833.\)
(b) \(H_{10^6} \approx \ln(10^6) + 0.5772 = 6\ln 10 + 0.5772 \approx 13.8155 + 0.5772 = 14.39.\)
(c) **False** — \(H_n\) is unbounded; it grows like \(\ln n \to \infty\) (just very slowly). The
terms \(\tfrac1k\) shrink to 0, but their partial sums still diverge.

**P10.** (a) \(\lg n = \tfrac{\ln n}{\ln 2} = \tfrac{1}{\ln 2}\ln n \approx 1.4427\,\ln n.\)
(b) Changing log base only multiplies by a constant, and \(O(\cdot)\) already absorbs constant
factors — so \(O(n\log n)\) is *base-agnostic*. But "\(\sim 2n\ln n\)" fixes the growth, the
base (\(e\)), *and* the leading constant (\(2\)), which is the whole point of chasing \(\sim\)
rather than \(O\).
(c) **\(f \sim n^2\) is stronger.** "\(f \sim n^2\)" pins \(f\) to \(n^2\) up to a vanishing
relative error (it even fixes the constant to 1); "\(f = O(n^2)\)" only caps \(f\) from above
(\(f\) could be much smaller, even \(\sim n\)). Asymptotic equivalence \(\Rightarrow\) big-O,
not the reverse.

---

### Next
That's the toolkit. Head to Module 1 — when the quicksort analysis pulls a \(\tfrac1N\)
probability, a telescoping sum, or an \(H_N\) out of the air, you'll now see exactly where each
comes from.
