# Chapter 3 exercises — Generating Functions

78 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **3.1** | 96 | Find the OGFs for each of the following sequences: {2k+1 }k≥0 , |
| **3.2** | 96 | Find [z N ] for each of the following OGFs: 1 , (1 − 3z)4 |
| **3.3** | 96 | Differentiate the OGF for harmonic numbers to verify the last line of Table 3.1. |
| **3.4** | 96 | ⚠ Prove that ∑ |
| **3.5** | 96 | By factoring 1 zM ln (1 − z)M +1 1 − z in two different ways (and performing the associated convolutions), prove a general identity satisfied by the harmonic numbers and binomial coefficients. |
| **3.6** | 96 | Find the OGF for { ∑ 0<k<n |
| **3.7** | 96 | Find the OGF for {Hk /k}k≥1 . |
| **3.8** | 96 | Find [z N ] for each of the following OGFs: 1 )2 1 ( ln 1−z 1−z Use the notation (2) |
| **3.9** | 99 | Find the EGFs for each of the following sequences: {2k+1 }k≥0 , |
| **3.10** | 99 | Find the EGFs for 1, 3, 5, 7, . . . and 0, 2, 4, 6, . . .. |
| **3.11** | 99 | Find N ![z N ]A(z) for each of the following EGFs: ( 2 1 1 )2 1 ln , A(z) = ln , A(z) = ez+z . A(z) = 1−z 1−z 1−z |
| **3.12** | 99 | Show that ∫ z 1 − e−t N ![z N ]ez dt = HN . t 0 ∑ (Hint : Form a differential equation for the EGF H(z) = N ≥0 HN z N/N !.) |
| **3.13** | 101 | Given the EGF A(z) for a sequence {ak }, find the EGF for the sequence { ∑ ak } N! . k! 0≤k≤N |
| **3.14** | 101 | Given the EGF A(z) for a sequence {ak }, show that the OGF for the sequence is given by ∫ ∞ |
| **3.15** | 104 | Find the EGF for the Fibonacci numbers. |
| **3.16** | 104 | Use generating functions to solve the following recurrences: an = −an−1 + 6an−2 an = 11an−2 − 6an−3 an = 3an−1 − 4an−2 an = an−1 − an−2 |
| **3.17** | 108 | Solve the recurrence an = 5an−1 − 8an−2 + 4an−3 |
| **3.18** | 108 | Solve the recurrence an = 2an−2 − an−4 |
| **3.19** | 108 | Solve the recurrence an = 6an−1 − 12an−2 + 18an−3 − 27an−4 |
| **3.20** | 108 | Solve the recurrence an = 3an−1 − 3an−2 + an−3 |
| **3.21** | 108 | Solve the recurrence ∑ (t) an = − (−1)k an−k k 1≤k≤t |
| **3.22** | 110 | Use generating functions to solve the recurrence nan = (n − 2)an−1 + 2 |
| **3.23** | 110 | [Greene and Knuth [6]] Solve the recurrence nan = (n + t − 1)an−1 |
| **3.24** | 110 | Solve the recurrence t ∑ an = n + 1 + ak−1 n |
| **3.25** | 112 | Use Taylor’s theorem to find the expansions of the following functions: sin(z), |
| **3.26** | 112 | Use Taylor’s theorem to verify that the coefficients of the series expansion of (1 − az − bz 2 )−1 satisfy a second-order linear recurrence with constant coefcients. |
| **3.27** | 112 | Use Taylor’s theorem to verify directly that H(z) = |
| **3.28** | 112 | Find an expression for 1 1 [z n ] √ ln . 1−z 1−z (Hint: Expand (1 − z)−α and differentiate with respect to α.) |
| **3.29** | 113 | Find an expression for [z n ] |
| **3.30** | 115 | Show that ∑ (2k )(2N − 2k ) k |
| **3.31** | 115 | What recurrence on {CN } corresponds to multiplying both sides of the differential equation (3) for the quicksort generating function by (1 − z)2 ? |
| **3.32** | 116 | Suppose that an OGF satisfies the differential equation A′ (z) = −A(z) + |
| **3.33** | 116 | What identity on binomial coefficients is implied by the convolution (1 + z)r (1 − z)s = (1 − z 2 )s (1 + z)r−s where r > s? |
| **3.34** | 116 | Prove that ∑ (t − k )(k ) 0≤k≤t |
| **3.35** | 116 | Use generating functions to evaluate |
| **3.36** | 116 | Use generating functions to find a sum expression for [z n ] |
| **3.37** | 116 | Use generating functions to find a sum expression for [z n ] . 2 − ez |
| **3.38** | 116 | [Dobinski, cf. Comtet] Prove that n![z n ]ee −1 = e−1 z |
| **3.39** | 116 | Prove the binomial transform identity using OGFs. Let A(z) and B(z) be related by ( z ) 1 B(z) = A , 1−z z−1 and then use the change of variable z = y/(y − 1). |
| **3.40** | 116 | Prove the binomial transform identity directly, without using generating functions. ∑ |
| **3.41** | 116 | [Faà di Bruno’s formula, cf. Comtet] Let f (z) = n fn z n and g(z) = ∑ n n n gn z . Express [z ]f (g(z)) using the multinomial theorem. |
| **3.42** | 119 | Show that the coefficients fn in the expansion 2 |
| **3.43** | 119 | Solve f (z) = e−z f |
| **3.44** | 119 | Find an explicit formula for the OGF of the sequence satisfying the divide-and-conquer recurrence for n > 1 with f0 = 0; |
| **3.45** | 119 | Iterate the following equation to obtain an explicit formula for f (z): f (z) = 1 + zf |
| **3.46** | 119 | [Polya] Given f (z) defined by the equation f (z) = |
| **3.47** | 119 | Prove that there is only one power series of the form f (z) = that satisfies f (z) = sin(f (z)). |
| **3.48** | 119 | Derive an underlying recurrence from the functional equation for 2–3 trees and use the recurrence to determine the number of 2–3 trees of 100 nodes. |
| **3.49** | 122 | Show that (1 − z)t C (t) (z) = Ψ(Ψ + 1) . . . (Ψ + t + 1)C(z). |
| **3.50** | 122 | Find the average number of exchanges used by median-of-three quicksort. |
| **3.51** | 122 | Find the number of comparisons and exchanges used, on the average, by quicksort when modified to use the median of ve elements for partitioning. |
| **3.52** | 123 | [Euler] Discuss the solution of the differential equation ∑ 0≤j≤r |
| **3.53** | 123 | [van Emden, cf. Knuth] Show that, when the median of a sample of 2t+1 elements is used for partitioning, the number of comparisons used by quicksort is 1 N lnN + O(N ). H2t+2 − Ht+1 |
| **3.54** | 126 | Modify the above derivation to derive directly the generating function for the number of binary trees with N external nodes. |
| **3.55** | 127 | Discuss the form of an expression for [z N ]D(z). |
| **3.56** | 127 | Write an efficient computer program that can compute [z N ]D(z), given N . |
| **3.57** | 127 | Show that the generating function for the number of ways to express N as a linear combination (with integer coefficients) of powers of 2 is ∏ |
| **3.58** | 127 | [Euler] Show that 1 = (1 + z)(1 + z 2 )(1 + z 4 )(1 + z 8 ) · · · . 1−z Give a closed form for the product of the first t factors. called the “computer scientist’s identity.” Why? |
| **3.59** | 127 | Generalize the previous exercise to base 3. |
| **3.60** | 127 | Express [z N ](1 − z)(1 − z 2 )(1 − z 4 )(1 − z 8 ) · · · in terms of the binary representation of N . |
| **3.61** | 130 | Give a simple expression for var(X) in terms of rk = Pr{X ≤ k}. |
| **3.62** | 130 | Define mean(P ) ≡ P ′ (1) and var(P ) ≡ P ′′ (1) + P ′ (1) − P ′ (1)2 . Prove that mean(P Q) = mean(P ) + mean(Q) and var(P Q) = var(P ) + var(Q) for any differentiable functions P and Q with P (1) = Q(1) = 1, not just PGFs. |
| **3.63** | 130 | Verify the above results from the closed form Pn (u) = |
| **3.64** | 131 | Find the PGF for the random variable that counts the number of leading 0s in a random binary string, and use the PGF to find the mean and standard deviation. |
| **3.65** | 136 | Calculate the variance for the number of 1 bits in a random binary string of length n, using Table 3.5 and pn (u) = (1 + u)n , as shown earlier. |
| **3.66** | 138 | Verify from the vertical expansion that the mean for the binomial distribution is n/2 by first calculating rk (z) as described earlier. |
| **3.67** | 139 | Con rm that q [1] (z) ≡ |
| **3.68** | 139 | Extract the coefficient of z N in q [2] (z) + q [1] (z) and verify the exact expression for the variance given in eorem 3.9. (See Exercise 3.8.) |
| **3.69** | 144 | Give closed-form expressions for the following: ∑ ( n) z n uk k n! |
| **3.70** | 144 | Prove from the generating function that ( ) ( ) ( ) n n−1 n−1 = + . k k k−1 |
| **3.71** | 144 | Prove from the generating function that [ ] [ ] [ ] n n−1 n−1 = (n − 1) + . k k k−1 |
| **3.72** | 144 | Prove from the generating function that { } { } { } n n−1 n−1 =k + . k k k−1 |
| **3.73** | 144 | Prove that Bm (0) = Bm (1) = Bm for all m > 1. |
| **3.74** | 144 | Prove from the generating function that Bk is zero for k odd, k ≥ 3. |
| **3.75** | 146 | Show that, for any k ≥ 0, the DGF for the characteristic sequence of numbers whose binary representation ends in k 0s is ζ(z)/2kz . |
| **3.76** | 146 | Find the DGF for the function ψN , the number of trailing 0s in the binary representation of N . |
| **3.77** | 146 | Find the DGF for the characteristic function of {N 2 }. |
| **3.78** | 146 | ⚠ Prove that ∑ k |
