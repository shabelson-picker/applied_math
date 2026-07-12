# Chapter 9 exercises — Words and Mappings

63 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **9.1** | 480 | How many different occupancy distributions are there for N unlabelled balls in a sequence of M urns? For example, if we denote the desired quantity by CM N , we have C2N = N + 1 because there is one configuration with k balls in the first urn and N − k balls in the second urn for each k from 0 to N . |
| **9.2** | 484 | Give a table like Table 9.2 for three balls in four urns. |
| **9.3** | 484 | Give tables like Tables 9.2 and 9.4 for two urns. |
| **9.4** | 484 | Give necessary and sufficient conditions on N and M for the average number of empty urns to equal the average minimum urn occupancy. |
| **9.5** | 488 | For M = 365, how many people are needed to be 99% sure that two have the same birthday? |
| **9.6** | 488 | Estimate the variance associated with the birthday distribution that is given in eorem 9.1, and explain the apparent discrepancy concerning the asymptotic values of the mean and the median. |
| **9.7** | 490 | Find all the 2-collections and 3-collections in Table 9.2, then compute P2 (z) and P3 (z) and check the coefficients of z 4 . |
| **9.8** | 491 | Expand the PGF by partial fractions to show that the probability that the N th ball lls the last empty urn can also be expressed as the alternating sum ( ∑ (M ) j )N −1 (−1)j 1 − . j M |
| **9.9** | 491 | Give an expression for the probability that collecting at least N boxes gives a full collection of M coupons. |
| **9.10** | 493 | Consider the “largest” construction among M -surjections: given an M -surjection of length N , consider the (M − 1)-surjection formed by removing all occurrences of M . Find the EGF for surjections using this construction. |
| **9.11** | 493 | Write a program that takes N and M as parameters and prints out all M -surjections of length N whenever the number of such objects is less than 1000. |
| **9.12** | 493 | Expand (ez − 1)M by the binomial theorem to show that N ![z N ]FM (z) = |
| **9.13** | 493 | Show that the number of partitions of N elements into nonempty subsets is z N ![z N ]ee −1 . ( |
| **9.14** | 493 | Show that N ![z N ]ee −1 = z |
| **9.15** | 493 | Prove that the bivariate EGF for the Stirling numbers of the second kind is exp(u(ez − 1)). |
| **9.16** | 493 | Applying the “largest” construction to find the number of M -words of length N might lead to the recurrence FN M = |
| **9.17** | 497 | Find the EGF for M -words with all letter frequencies even. |
| **9.18** | 497 | Prove that the number of ways to distribute M (k + 1) balls among M urns with all urns having > k balls is equal to the number of ways to distribute M (k + 1) − 1 balls among M urns with all urns having < (k + 2) balls, for all k ≥ 0. (See Table 9.5.) Give an explicit formula for this quantity as a quotient of factorials. |
| **9.19** | 497 | What is the expected number of balls thrown in N urns before the second collision occurs? Assume that “collision” here means the event “ball falling into nonempty urn.” |
| **9.20** | 497 | What is the expected number of balls thrown in N urns before the second collision occurs, when we assume that “collision” means the event “ball falling into urn with exactly one ball in it?” |
| **9.21** | 497 | Give an explicit expression for the number of M -words with no three occurrences of the same letter. |
| **9.22** | 497 | Give a plot like Figure 9.3 for the probability that three people have the same birthday. |
| **9.23** | 497 | For M = 365, how many people are needed to be 50% sure that three have the same birthday? Four? |
| **9.24** | 499 | What is the average number of balls thrown into M urns before each urn is filled at least twice? |
| **9.25** | 499 | Derive an expression for the exponential CGF for the expected minimal occupancy when N balls are distributed into M urns. Tabulate the values for M and N less than 20. |
| **9.26** | 500 | What is the average number of blocks of contiguous equal elements in a random word? |
| **9.27** | 500 | Analyze “rises” and “runs” in words (cf. §7.1). |
| **9.28** | 505 | What is the probability that one urn will get all the balls when 100 balls are randomly distributed among 100 urns? |
| **9.29** | 505 | What is the probability that each urn will get one ball when 100 balls are randomly distributed among 100 urns? |
| **9.30** | 505 | What is the standard deviation for the average number of empty urns? |
| **9.31** | 505 | What is the probability that each urn will contain an even number of balls when N balls are distributed among M urns? |
| **9.32** | 505 | Prove that [M ] |
| **9.33** | 509 | For 1000 keys, which value of M will make hashing with separate chaining access fewer keys than a binary tree search? For 1 million keys? |
| **9.34** | 509 | Find the standard deviation of the number of comparisons required for a successful search in hashing with separate chaining. |
| **9.35** | 509 | Determine the average and standard deviation of the number of comparisons used for a search when the lists in the table are kept in sorted order (so that a search can be cut short when a key larger than the search key is found). |
| **9.36** | 509 | [Broder and Karlin] Analyze the following variant of Program 9.1: compute two hash functions and put the key on the shorter of the two lists. |
| **9.37** | 518 | Find [z n ]eαC(z) where C(z) is the Cayley function (see the discussion at the end of §6.14 and in §9.7 in this chapter). |
| **9.38** | 518 | (“Abel’s binomial theorem.”) Use the result of the previous exercise and the identity e(α+β)C(z) = eαC(z) eβC(z) to prove that (α + β)(n + α + β) |
| **9.39** | 518 | How many keys can be inserted into a linear probing table of size M before the average search cost gets to be greater than lnN ? |
| **9.40** | 518 | Compute the exact cost of an unsuccessful search using linear probing for a full table. |
| **9.41** | 518 | Give an explicit representation for the EGF for the cost of an unsuccessful search. |
| **9.42** | 518 | Use the symbolic method to derive the EGF of the number of probes required by linear probing in a successful search, for fixed M . * |
| **9.43** | 520 | Find the exponential BGF for the image cardinality distribution. |
| **9.44** | 520 | Use a combinatorial argument to find the exponential BGF for the image cardinality distribution. |
| **9.45** | 520 | Give a recurrence relationship for the number of mappings of size N with k different integers in the image, and use that to obtain a table of values for N < 20. |
| **9.46** | 520 | Give an explicit expression for the number of M -words of length N having k different letters. |
| **9.47** | 522 | Prove that every random mapping must have at least one cycle. |
| **9.48** | 522 | Explore properties of the random mappings defined by f (i) ≡ 1 + (i2 + 1) mod N for N = 100, 1000, 10,000, and primes near these values. |
| **9.49** | 527 | Show that the analysis of the rho length of a random point in a random mapping is equivalent to that for the birthday problem. |
| **9.50** | 531 | Which N -mappings have maximal and minimal rho length? Tree path length? |
| **9.51** | 531 | Write a program to find the rho length and tree path length of a random mapping. Generate 1000 random mappings for N as large as you can and compute the average number of cycles, rho length, and tree path length. |
| **9.52** | 531 | Write a program to find the rho length and tree path length of a random mapping without using any extra storage. |
| **9.53** | 531 | A mapping with no repeated integers is a permutation. Give an efficient algorithm for determining whether a mapping is a tree. |
| **9.54** | 531 | Compute the average size of the largest component in a random N mapping, for all N < 10. |
| **9.55** | 531 | ⚠ Prove |
| **9.56** | 531 | What is the average number of different integers in the image when a random mapping is iterated twice? |
| **9.57** | 531 | Consider the N N tree-cycle structures that correspond to all the N mappings. How many of these are different when considered as unlabelled, unordered objects, for N ≤ 7? ( ese are called random mapping patterns.) |
| **9.58** | 531 | Describe the graph structure of partial mappings, where the image of a point may be unde ned. Set up the corresponding EGF equations and check that the number of partial mappings of size N is (N + 1)N . |
| **9.59** | 532 | Analyze “path length” in sequences of 2N random integers in the range 1 to N . |
| **9.60** | 532 | Generate 100 random mappings of size 10, 100, and 1000 and empirically verify the statistics given in Table 9.13. |
| **9.61** | 533 | Use Floyd’s method to test the random number generators on your machine for short cycles. |
| **9.62** | 533 | Use Floyd’s algorithm to test the middle square random number generator. |
| **9.63** | 533 | Use Floyd’s method to estimate the rho length associated with various starting values, c, and N for the function f (x) = (x2 + c) mod N. |
