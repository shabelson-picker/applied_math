# Chapter 2 exercises — Recurrence Relations

74 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **2.1** | 46 | Write recursive and nonrecursive programs to compute values for the Fibonacci recurrence and try to use each to compute F20 . Explain the behavior of each program in this case. |
| **2.2** | 46 | How many arithmetic operations are used by Program 2.1, as a function of Nmax ? |
| **2.3** | 46 | Write a recursive program to compute values using the recurrence (1) directly. How does the number of arithmetic operations used by this program compare with Program 2.1 (see the previous exercise)? |
| **2.4** | 46 | Estimate how many operations would be required by both recursive and nonrecursive programs to compute values using the recurrences (2) and (3). |
| **2.5** | 46 | Write a program to compare quicksort, its median-of-three variant, and radix-exchange sort, calculating values from the recurrences given in Chapter 1. For quicksort, check values against the known solution; for the others, make conjectures about properties of the solution. |
| **2.6** | 47 | Solve the recurrence an = an−1 + an−2 |
| **2.7** | 47 | Solve the inhomogeneous recurrence an = an−1 + an−2 + r |
| **2.8** | 47 | For f linear, express the solution to the recurrence an = f (an−1 , an−2 ) |
| **2.9** | 49 | Solve the recurrence an = |
| **2.10** | 49 | Solve the recurrence an = an−1 + (−1)n n |
| **2.11** | 49 | Solve the recurrence nan = (n − 2)an−1 + 2 |
| **2.12** | 49 | Solve the recurrence an = 2an−1 + 1 (Hint : Divide both sides by 2n .) |
| **2.13** | 51 | Solve the recurrence an = |
| **2.14** | 51 | Write down the solution to for n > t |
| **2.15** | 51 | Solve the recurrence nan = (n + 1)an−1 + 2n |
| **2.16** | 51 | Solve the recurrence nan = (n − 4)an−1 + 12nHn |
| **2.17** | 51 | [Yao] (“Fringe analysis of 2–3 trees [25]”) Solve the recurrence AN = AN −1 − |
| **2.18** | 52 | Define bn = an − α with an and α defined as above. Find an approximate formula for bn when n is large and a0 is between 0 and 1. |
| **2.19** | 52 | Show that an = cos(an−1 ) converges when a0 is between 0 and 1, and compute limn→∞ an to ve decimal places. |
| **2.21** | 54 | Prove that an = Θ(1/n). Compute initial terms and try to guess a constant c such that an is approximated by c/n. en find a rigorous proof that nan tends to a constant. |
| **2.22** | 54 | [De Bruijn] Show that the solution to the recurrence an = sin(an−1 ) |
| **2.23** | 54 | What happens when f ′ (α) > 1? |
| **2.24** | 54 | State sufficient criteria corresponding to the three cases above for local convergence (when a0 is sufficiently close to α) and quantify the speed of convergence in terms of f ′ (α) and f ′′ (α). |
| **2.25** | 55 | Give a recurrence that has the solution an = 4n − 3n + 2n . |
| **2.26** | 58 | Explain how to solve an inhomogeneous recurrence of the form an = x1 an−1 + x2 an−2 + . . . + xt an−t + r |
| **2.27** | 58 | Give initial conditions a0 , a1 for which the solution to an = 5an−1 − 6an−2 |
| **2.28** | 59 | Give initial conditions a0 , a1 , and a2 for which the growth rate of the solution to an = 2an−1 − an−2 + 2an−3 for n > 2 is (i) constant, (ii) exponential, and (iii) uctuating in sign. |
| **2.29** | 59 | Solve the recurrence for n > 1 with a1 = 2 and a0 = 1. |
| **2.30** | 59 | Solve the recurrence an = 2an−1 − an−2 |
| **2.31** | 59 | Solve the recurrence an = an−1 − an−2 |
| **2.32** | 59 | Solve the recurrence 2an = 3an−1 − 3an−2 + an−3 |
| **2.33** | 59 | Find a recurrence describing a sequence for which the order of growth decreases exponentially for odd-numbered terms, but increases exponentially for evennumbered terms. |
| **2.34** | 59 | Give an approximate solution for the “third-order” Fibonacci recurrence (3) |
| **2.35** | 60 | Solve the recurrence n(n − 1)an = (n − 1)an−1 + an−2 |
| **2.36** | 60 | Give a simple algorithm to determine whether a given monomial si1 si2 . . . sip tj1 tj2 . . . tjq appears in the expansion of an . How many such monomials are there? |
| **2.37** | 62 | Give exact formulae for bn and an . |
| **2.38** | 62 | Solve the recurrence √ an = 1 + a2n−1 |
| **2.39** | 62 | From the above discussion, solve the register allocation recurrence for a0 = 3, 4. Discuss what happens for a0 = 3/2. |
| **2.40** | 63 | Solve the register allocation recurrence for a0 = 2 + ϵ, where ϵ is an arbitrary fixed positive constant. Give an accurate approximate answer. |
| **2.41** | 63 | Find all values of the parameters α, β, and γ such that an = αa2n−1 + βan−1 +γ reduces to bn = b2n−1 −2 by a linear transformation (bn = f (α, β, γ)an + g(α, β, γ)). In particular, show that an = a2n−1 + 1 does not reduce to this form. |
| **2.42** | 63 | [Melzak] Solve the recurrence an = 2an−1 |
| **2.43** | 64 | Solve the recurrence an = |
| **2.44** | 64 | Consider the recurrence an = 1/(sn + tn an−1 ) |
| **2.45** | 66 | Solve the quicksort recurrence for f (n) = n3 . |
| **2.46** | 66 | [Greene and Knuth] Solve the quicksort median-of-three recurrence (see equation (4) in Chapter 1) using the repertoire method. (See [18] or [24] for a direct solution to this recurrence using differencing and summation factors, and see Chapter 3 for a solution using generating functions.) |
| **2.47** | 67 | Solve the recurrence an = 2/(n + an−1 ) |
| **2.48** | 67 | Use bootstrapping to show that the number of compares used by median-of-three quicksort is αN lnN + O(N ). en determine the value of α. |
| **2.49** | 67 | [Greene and Knuth] Use bootstrapping to show that the solution to an = |
| **2.50** | 69 | Find the asymptotic growth of the solution to the “perturbed” Fibonacci recurrence ( ( 1) 1) an+1 = 1 + an + 1 − an−1 for n > 1 with a0 = 0 and a1 = 1. n n |
| **2.51** | 69 | Solve the recurrence an = nan−1 + n2 an−2 |
| **2.52** | 69 | [Aho and Sloane] |
| **2.53** | 69 | Solve the following perturbation of the Fibonacci recurrence: ( 1) an = 1 − (an−1 + an−2 ) for n > 1 with a0 = a1 = 1. n Try a solution of the form nα ϕn and identify α. |
| **2.54** | 73 | What is the number of comparisons used during an unsuccessful search with binary search in a table of size N in the best case? |
| **2.55** | 73 | Consider a “ternary search” algorithm, where the file is divided into thirds, two comparisons are used to determine where the key could be, and the algorithm is applied recursively. Characterize the number of comparisons used by that algorithm in the worst case, and compare it to a binary search. |
| **2.56** | 75 | By considering the rightmost bits, give a direct proof that the number of bits in the binary representations of all the numbers less than N satisfies (4), but with an additive term of N − 1 instead of N . |
| **2.57** | 75 | Prove that N ⌊lgN ⌋ + 2N − 2⌊lgN ⌋+1 = N ⌈lgN ⌉ + N − 2⌈lgN ⌉ for all positive N . (See Exercise 1.4.) |
| **2.58** | 79 | Give recurrences for the functions plotted in Figure 2.5. |
| **2.59** | 79 | Derive recurrences for RN similar to those given above for PN . |
| **2.60** | 79 | Plot the solution to the recurrence AN = A⌊N/2⌋ + A⌈N/2⌉ + ⌊lgN ⌋ |
| **2.61** | 79 | Plot the solution to the recurrence BN = 3B⌈N/2⌉ + N |
| **2.62** | 79 | Plot the solution to DN = D⌈N/2⌉ + D⌈N/2⌉ + CN |
| **2.63** | 80 | Take the binary representation of N , reverse it, and interpret the result as an integer, ρ(N ). Show that ρ(N ) satisfies a divide-and-conquer recurrence. Plot its values for 1 ≤ N ≤ 512 and explain what you see. |
| **2.64** | 80 | What is the average length of the initial string of 1s in the binary representation of a number less than N , assuming all such numbers are equally likely? |
| **2.65** | 80 | What is the average length of the initial string of 1s in a random bitstring of length N , assuming all such strings are equally likely? |
| **2.66** | 80 | What is the average and the variance of the length of the initial string of 1s in a (potentially infinite) sequence of random bits? |
| **2.67** | 80 | What is the total number of carries made when a binary counter increments N times, from 0 to N ? |
| **2.68** | 84 | Give explicit formulae for c1 and c2 . Start by doing the case δ = 0. |
| **2.69** | 85 | Plot the periodic part of the solution to the recurrence aN = 3a⌊N/3⌋ + N |
| **2.70** | 85 | Answer the previous question for the other possible ways of dividing a problem of size N into three parts with the size of each part either ⌊N/3⌋ or ⌈N/3⌉. |
| **2.71** | 85 | Give an asymptotic solution to the recurrence a(x) = αax/β + 2x |
| **2.72** | 85 | Give an asymptotic solution to the recurrence for N > 2 with a1 = a2 = a3 = 1. |
| **2.73** | 85 | Give an asymptotic solution to the recurrence aN = aN/2 + aN/4 + N |
| **2.74** | 85 | Consider the recurrence an = af (n) + flag(n) + ah(n) + 1 |
| **2.75** | 85 | Consider the recurrence an = af (n) + flag(n) + 1 |
