# Chapter 7 exercises — Permutations

65 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **7.1** | 348 | Explain how to compute the number of left-to-right maxima, right-toleft minima, and right-to-left maxima from the inversion table. |
| **7.2** | 349 | How many different ways are there to write the sample permutation in cycle notation? |
| **7.3** | 349 | How many permutations of 2N elements have exactly two cycles, each of length N ? How many have N cycles, each of length 2? |
| **7.4** | 349 | Which permutations of N elements have the maximum number of different representations with cycles? |
| **7.5** | 352 | Write a program that computes the number of increasing subsequences in a given permutation in polynomial time. |
| **7.6** | 355 | Let a1 , a2 , and a3 be “random” numbers between 0 and 1 produced independently as values of a random variable X satisfying the continuous distribution F (x) = Pr{X ≤ x}. Show that the probability of the event a1 < a2 < a3 is 1/3!. Generalize to any ordering pattern and any number of keys. |
| **7.7** | 359 | Alternatively, we might put the cycles in decreasing order of their smallest elements, writing the smallest element in the cycle first. Give this representation for our sample permutation. |
| **7.8** | 359 | Write a programs that will compute Foata’s representation of a given permutation, and vice versa. |
| **7.9** | 359 | Give an efficient algorithm for computing the inversion table corresponding to a given permutation, and another algorithm for computing the permutation corresponding to a given inversion table. |
| **7.10** | 359 | Another way to define inversion tables is with qi equal to the number of integers to the left of i in the permutation that are greater. Prove the one-to-one correspondence for this kind of inversion table. |
| **7.11** | 360 | Show that the number of ways to place k mutually nonattacking rooks ( )2 in an N -by-N chessboard is N k!. k |
| **7.12** | 360 | Suppose that we mark cells whose marks are above and to the left in the lattice representation. How many cells are marked? Answer the same question for the other two possibilities (“above and right” and “below and left”). |
| **7.13** | 360 | Show that the lattice representation of an involution is symmetric about the main diagonal. |
| **7.14** | 361 | List ve permutations that correspond to the BST in Figure 7.4. |
| **7.15** | 363 | Characterize the nodes in an HOT that correspond to rises, double rises, falls, and double falls in permutations. |
| **7.16** | 363 | How many permutations are strictly alternating, with pi−1 and pi+1 either both less than or both greater than pi for 1 < i < N ? |
| **7.17** | 363 | List ve permutations corresponding to the HOT in Figure 7.5. |
| **7.18** | 364 | Let K(z) = z/(1 − z) be the EGF for nonempty HOTs. Give a direct argument showing that K ′ (z) = 1 + 2K(z) + K 2 (z). |
| **7.19** | 364 | Use an argument similar to HOT enumeration by EGF to derive the differential equation for the exponential CGF for internal path length in binary search trees (see the proof of eorem 5.5 and §6.6). |
| **7.20** | 365 | How many permutations correspond to the BST in Figure 7.4? |
| **7.21** | 365 | Give the number of permutations that correspond to each of the BST shapes in Figure 6.1. |
| **7.22** | 365 | Characterize the binary trees of size N to which the smallest number of permutations correspond and those to which the largest number of permutations correspond. |
| **7.23** | 371 | Show that the number of involutions of size N satisfies the recurrence bN +1 = bN + N bN −1 |
| **7.24** | 371 | Derive a recurrence that can be used to compute the number of permutations that have no cycle of length > 3. |
| **7.25** | 371 | Use the methods from §5.5 to derive a bound involving N N (1−1/k) for the number of permutations with no cycle of length greater than k. |
| **7.26** | 371 | Find the EGF for the number of permutations that consist only of cycles of even length. Generalize to find the EGF for the number of permutations that consist only of cycles of length divisible by t. |
| **7.27** | 371 | By differentiating the relation (1 − z)D(z) = ez and setting coefficients equal, obtain a recurrence satisfied by the number of derangements of N elements. |
| **7.28** | 371 | Write a program to, given k, print a table of the number of permutations of N elements with no cycles of length < k for N < 20. |
| **7.29** | 371 | An arrangement of N elements is a sequence formed from a subset of the elements. Prove that the EGF for arrangements is ez/(1 − z). Express the coefficients as a simple sum and give a combinatorial interpretation of that sum. |
| **7.30** | 378 | Give a simple noncomputational proof that the mean number of rises in a permutation of N elements is (N −1)/2. (Hint : For every permutation p1 p2 . . . pN , consider the “complement” q1 q2 . . . qN formed by qi = N + 1 − pi .) |
| **7.31** | 379 | Generalize the CGF argument given earlier to provide an alternative ∑ direct proof that the BGF A(z, u) = p∈P uruns(p) z \|p\| satisfies the partial differential equation given in the proof of eorem 7.5. |
| **7.32** | 379 | ⚠ Prove that |
| **7.33** | 379 | ⚠ Prove that |
| **7.34** | 380 | Give a direct combinatorial derivation of the exact formula for SN . (Hint : Consider all places at which an increasing subsequence may appear.) |
| **7.35** | 380 | Find the EGF and an asymptotic estimate for the number of increasing subsequences of length k in a random permutation of length N (where k is fixed relative to N ). |
| **7.36** | 380 | Find the EGF and an asymptotic estimate for the number of increasing subsequences of length at least 3 in a random permutation of length N . |
| **7.37** | 383 | Suppose that the space required for leaf, unary, and binary nodes is proportional to c0 , c1 , and c2 , respectively. Show that the storage requirement for random HOTs and for random BSTs is ∼ (c0 + c1 + c2 )N/3. |
| **7.38** | 383 | Prove that valleys and peaks have the same distribution for random permutations. |
| **7.39** | 383 | Under the assumption of the previous exercise, prove that the storage requirement for random binary Catalan trees is ∼ (c0 + 2c1 + c2 )N/4. |
| **7.40** | 383 | Show that a sequence of N random real numbers between 0 and 1 (uniformly and independently generated) has ∼ N/6 double rises and ∼ N/6 double |
| **7.41** | 384 | Generalize Exercise 6.18 to show that the BGF for right-branching nodes and binary nodes in HOTs satisfies Kz (z, u) = 1 + (1 + u)K(z, u) + K 2 (z, u) and therefore K(z, u) = |
| **7.42** | 385 | How many permutations of N elements have exactly one inversion? Two? ree? |
| **7.43** | 385 | Show how to modify insertion sort to also compute the inversion table for the permutation associated with the original ordering of the elements. |
| **7.44** | 388 | Derive a recurrence relation satisfied by pN k , the probability that a random permutation of N elements has exactly k inversions. |
| **7.45** | 388 | Find the CGF for the total number of inversions in all involutions of length N . Use this to find the average number of inversions in an involution. |
| **7.46** | 388 | Show that N !pN k is a fixed polynomial in N for any fixed k, when N is sufficiently large. |
| **7.47** | 392 | Show that the number of inversions in a 2-ordered permutation is equal to the number of lattice squares between the path and the “down-right-downright. . .” diagonal. |
| **7.48** | 392 | Let T be the set of all 2-ordered permutations, and define the BGF P (z, u) = |
| **7.49** | 392 | Show that T (z, u) = uzS(uz, u) and Q(uz, u) = T (uz, u)+T (z, u). |
| **7.50** | 392 | Using the result of the previous two exercises, show that S(z, u) = uzS(z, u)S(uz, u) + 1 and P (z, u) = (uzS(uz, u) + zS(z, u))P (z, u) + 1. |
| **7.51** | 392 | Using the result of the previous exercise, show that Pu (1, z) = |
| **7.52** | 392 | Give an asymptotic formula for the average number of inversions in a 3-ordered permutation, and analyze shellsort for the case when the increments are 3 and 1. Generalize to estimate the leading term of the cost of (h, 1) shellsort, and the asymptotic cost when the best value of h is used (as a function of N ). |
| **7.53** | 393 | Analyze the following sorting algorithm: given an array to be sorted, sort the elements in odd positions and in even positions recursively, then sort the resulting 2-ordered permutation with insertion sort. For which values of N does this algorithm use fewer comparisons, on the average, than the pure recursive quicksort of Chapter 1? |
| **7.54** | 399 | Let pN k be the probability that a random permutation of N elements has k left-to-right minima. Give a recurrence relation satisfied by pN k . |
| **7.55** | 400 | Prove directly that |
| **7.56** | 400 | Specify and analyze an algorithm that determines, in a left-to-right scan, the two smallest elements in an array. |
| **7.57** | 400 | Consider a situation where the cost of accessing records is 100 times the cost of accessing keys, and both are large by comparison with other costs. For which values of N is selection sort preferred over insertion sort? |
| **7.58** | 400 | Answer the previous question for quicksort versus selection sort, assuming that an “exchange” costs twice as much as a “record access.” |
| **7.59** | 400 | Consider an implementation of selection sort for linked lists, where on each interation, the smallest remaining element is found by scanning the “input” list, but then it is removed from that list and appended to an “output” list. Analyze this algorithm. |
| **7.60** | 400 | Suppose that the N items to be sorted actually consist of arrays of N words, the first of which is the sort key. Which of the four comparison-based methods that we have seen so far (quicksort, mergesort, insertion sort, and selection sort) adapts best to this situation? What is the complexity of this problem, in terms of the amount of input data? |
| **7.61** | 405 | Use asymptotics from generating functions (see §5.5) or a direct argument to show that the probability for a random permutation to have j cycles of length k is asymptotic to the Poisson distribution e−λ λj /j! with λ = 1/k. |
| **7.62** | 405 | For a permutation of length 100, what is the probablility that the loop in Program 7.5 never iterates more than 50 times? |
| **7.63** | 405 | [Knuth] Consider a situation where the permutation array cannot be modified and no other extra memory is available. An algorithm to perform in situ permutation can be developed as follows: the elements in each cycle will be permuted when the smallest index in the cycle is encountered. For j from 1 to N, test each index to see if it is the smallest in the cycle by starting with k = j and setting k = p[k] while k > j. If it is, then permute the cycle as in Program 7.5. Show that the BGF for the number of times this k = p[k] instruction is executed satisfies the functional equation Bu (z, u) = B(z, u)B(z, zu). From this, find the mean and variance for this parameter of random permutations. (See [12].) |
| **7.64** | 407 | Consider a modification of bubble sort where the passes through the array alternate in direction (right to left, then left to right). What is the effect of two such passes on the inversion table? |
| **7.65** | 410 | Find the average length of the shortest cycle in a random permutation of length N , for all N < 10. (Note: Shepp and Lloyd show this quantity to be ∼ e−γ lnN , where γ is Euler’s constant.) |
