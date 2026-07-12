# Chapter 4 exercises — Asymptotic Approximations

76 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **4.1** | 154 | Show that ( ) N/(N + 1) = O 1 , |
| **4.2** | 154 | Show that (1) N =1+O N +1 N |
| **4.3** | 154 | Show that N α = o(N β ) if α < β. |
| **4.4** | 154 | Show that, for r fixed, ( ) ( ) N Nr = + O N r−1 r r! |
| **4.5** | 154 | Show that logN = o(N ϵ ) for all ϵ > 0. |
| **4.6** | 154 | Show that 1 = o(1) and 2 + lnN |
| **4.7** | 156 | Prove that e is exponentially small for any positive constant ϵ. ( ( ) ϵ is, given ϵ, prove that e−N = O N −M for any fixed M > 0.) |
| **4.8** | 156 | Prove that e−log N and (logN )−logN are exponentially small. 2 |
| **4.9** | 156 | If α < β, show that αN is exponentially small relative to β N . For β = 1.2 and α = 1.1, find the absolute and relative errors when αN +β N is approximated by β N , for N = 10 and N = 100. |
| **4.10** | 156 | Show that the product of an exponentially small quantity and any polynomial in N is an exponentially small quantity. |
| **4.11** | 156 | Find the most accurate expression for an implied by each of the following recurrence relationships: ( ) an = 2an/2 + O n an = 2an/2 + o(n) an ∼ 2an/2 + n. In each case assume that an/2 is taken to be shorthand notation for a⌊n/2⌋ + O(1). |
| **4.12** | 156 | Using the definitions from Chapter 1, find the most accurate expression for an implied by each of the following recurrence relationships: ( ) an = 2an/2 + O n an = 2an/2 + Θ(n) an = 2an/2 + Ω(n). In each case assume that an/2 is taken to be shorthand notation for a⌊n/2⌋ + O(1). |
| **4.13** | 157 | Let β > 1 and take f (x) = xα with α > 0. If a(x) satisfies the recurrence for x ≥ 1 with a(x) = 0 for x < 1 |
| **4.14** | 159 | ⚠ Use |
| **4.15** | 159 | ⚠ Use |
| **4.16** | 159 | ⚠ Use |
| **4.17** | 159 | [Miles, cf. Knuth] Show that the polynomial z t − z t−1 − . . . − z − 1 has t distinct roots and that exactly one of the roots has modulus greater than 1, for all t > 1. |
| **4.18** | 159 | Give an approximate solution for the “tth-order Fibonacci” recurrence [t] |
| **4.19** | 159 | [Schur] Show that the number of ways to change an N -denomination bill using coin denominations d1 , d2 , . . . , dt with d1 = 1 is asymptotic to N t−1 . d1 d2 . . . dt (t − 1)! (See Exercise 3.55.) |
| **4.20** | 161 | Extend Table 4.1 to cover the cases N = 105 and 106 . |
| **4.21** | 163 | Expand ln(1 − x + x2 ) as x → 0, to within O x4 . |
| **4.22** | 163 | Give an asymptotic expansion for ln(N α + N β ), where α and β are positive constants with α > β. |
| **4.23** | 163 | Give an asymptotic expansion for |
| **4.24** | 163 | Estimate the value of e0.1 + cos(.1) − ln(.9) to within 10−4 , without using a calculator. |
| **4.25** | 163 | Show that 1 = 0.000102030405060708091011 · · · 47484950 · · · 9801 to within 10−100 . How many more digits can you predict? Generalize. |
| **4.26** | 165 | Use the nonasymptotic version √ formula to give a bound ( ) of Stirling’s on the error made in estimating N 4N −1 / 2N with N πN /4. N |
| **4.27** | 167 | Assume that the constant C implied in the O-notation is less than 10 in absolute value. Give specific bounds for H1000 implied by the absolute formula HN = lnN + γ + O(1/N ) and by the relative formula HN = lnN (1 + O(1/logN )). |
| **4.28** | 167 | Assume that the constant C implied in the O-notation is less than 10 in absolute value. Give specific bounds for the 10th Catalan number implied by the relative formula ( ) ( 1 )) 1 2N 4N ( 1+O =√ . N +1 N N πN 3 |
| **4.29** | 167 | Suppose that f (N ) admits a convergent representation ∑ f (N ) = ak N −k k≥0 |
| **4.30** | 167 | Construct a function f (N ) such that f (N ) ∼ |
| **4.31** | 170 | Prove or disprove the following, for N → ∞: ( ) eN = O N 2 , |
| **4.32** | 170 | Give an asymptotic expansion for e1/(N +1) to within O N −3 . |
| **4.33** | 171 | Calculate (HN )2 to within O 1/N , then to within o(1/N ). |
| **4.34** | 172 | Derive an asymptotic expansion for cot x to O x4 . |
| **4.35** | 172 | Derive an asymptotic expansion for x/(ex − 1) to O x5 . |
| **4.36** | 173 | Carry out the expansion for the Catalan numbers to within O N −4 accuracy. ( ) |
| **4.37** | 173 | Calculate an asymptotic expansion for 3N N /(N + 1). |
| **4.38** | 173 | Calculate an asymptotic expansion for (3N )!/(N !)3 . |
| **4.39** | 174 | What is the approximate value of 1 − ? N ( lnN )N |
| **4.40** | 174 | Give a three-term asymptotic expansion of 1 − . N |
| **4.41** | 174 | Suppose that interest on a bank account is “compounded daily”—that is, 1/365 of the interest is added to the account each day, for 365 days. How much more interest is paid in a year on an account with $10,000, at a 10% interest rate compounded daily, as opposed to the $1000 that would be paid if interest were paid once a year? |
| **4.42** | 174 | Simplify the asymptotic expression exp{1+1/N +O 1/N 2 } without losing asymptotic accuracy. ( ) |
| **4.43** | 174 | Find an asymptotic estimate for ln(sin((N !)−1 )) to within O 1/N 2 . |
| **4.44** | 174 | Show that sin(tan(1/N )) ∼ 1/N and tan(sin(1/N )) ∼ 1/N . find the order of growth of sin(tan(1/N )) − tan(sin(1/N )). |
| **4.45** | 174 | Find an estimate for HTN , where TN is the N th Catalan ( asymptotic ) number, to within O 1/N . |
| **4.46** | 175 | Let an be defined as the unique positive root of the equation n = an ean ( ) for n > 1. Find an asymptotic estimate for an , to within O 1/(logn)3 . |
| **4.47** | 175 | Give the reversion of the power series y = c0 + c1 x + c2 x2 + c3 x3 + O(x4 ). (Hint : Take z = (y − c0 )/c1 .) |
| **4.48** | 177 | Give an asymptotic estimate for |
| **4.49** | 177 | Give an asymptotic estimate for |
| **4.50** | 177 | Give an asymptotic estimate for |
| **4.51** | 177 | Give an asymptotic estimate for |
| **4.53** | 182 | Develop an asymptotic expansion for ∑ 1 . 1 + k/N 0≤k≤N |
| **4.54** | 182 | Show that ∑ 0≤k≤N |
| **4.55** | 186 | Evaluate γ to 10 decimal places. |
| **4.56** | 186 | Show that the generalized (second-order) harmonic numbers admit the asymptotic expansion ∑ |
| **4.57** | 186 | Derive an asymptotic expansion for ∑ |
| **4.58** | 186 | Use Euler-Maclaurin summation to estimate ∑ √ k, 1≤k≤N |
| **4.59** | 186 | Derive full asymptotic expansions for ∑ (−1)k k |
| **4.60** | 186 | ⚠  |
| **4.61** | 192 | ⚠ Prove that |
| **4.62** | 192 | Use Stirling’s formula for lnN ! to prove the relative bounds for the Ramanujan Q- and R-distributions given in eorem 4.4 and eorem 4.5, respectively. |
| **4.63** | 194 | Write a program to compute exact values of the binomial distribution to single-precision oating point accuracy. |
| **4.64** | 198 | Carry out the normal approximation to O 1/N 2 for the case k = √ ( ) N +O 1 . |
| **4.65** | 198 | Plot the smallest k for which the binomial probabilities are greater than .001 as a function of N . |
| **4.66** | 202 | ⚠ Give an asymptotic approximation to |
| **4.67** | 202 | Give an asymptotic approximation to N for p fixed. k p (1 − p) (Hint : Shift so that the largest terms in the distribution are at k = 0.) |
| **4.68** | 202 | Give√an asymptotic approximation of the binomial distribution for the case where p = λ/ N . |
| **4.69** | 202 | Give an asymptotic approximation of the binomial distribution for the case where p = λ/lnN . |
| **4.70** | 205 | By applying Euler-Maclaurin summation to the functions xe−x /2 and 3 x3 e−x /2 , show that 2 |
| **4.71** | 207 | Show that P (N ) = |
| **4.72** | 207 | Find a direct argument showing that R(N ) − Q(N ) ∼ 2/3. |
| **4.73** | 211 | Find an asymptotic estimate for |
| **4.74** | 211 | Find an asymptotic estimate for |
| **4.75** | 211 | Find an asymptotic estimate for |
| **4.76** | 214 | Find an asymptotic estimate for |
| **4.77** | 214 | Find an asymptotic estimate for |
