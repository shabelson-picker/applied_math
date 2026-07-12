# Chapter 6 exercises — Trees

79 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **6.1** | 260 | Develop an alternative proof of this result using induction. |
| **6.2** | 260 | What proportion of the binary trees with N internal nodes have both subtrees of the root nonempty? For N = 1, 2, 3, and 4, the answers are 0, 0, 1/5, and 4/14, respectively (see Figure 5.2). |
| **6.3** | 260 | What proportion of the binary trees with 2N + 1 internal nodes have N internal nodes in each of the subtrees of the root? |
| **6.4** | 263 | For what proportion of the trees with N internal nodes does the root have a single child? For N = 1, 2, 3, 4, and 5, the answers are 0, 1, 1/2, 2/5, and 5/14, respectively (see Figure 6.4). |
| **6.5** | 263 | Answer the previous questions for the root having t children, for t = 2, 3, and 4. |
| **6.6** | 263 | What proportion of the forests with N nodes have no trees consisting of a single node? For N = 1, 2, 3, and 4, the answers are 0, 1/2, 2/5, and 3/7, respectively (see Figure 6.4). |
| **6.7** | 265 | Give parenthesis systems that correspond to the forests in Figure 6.2. |
| **6.8** | 267 | Given an (ordered) tree, consider its representation as a binary tree using the rotation correspondence. Discuss the relationship between the preorder and postorder representations of the ordered tree and the preorder, inorder, and postorder representations of the corresponding binary tree. |
| **6.9** | 269 | Find and prove the validity of a correspondence between N -step gambler’s ruin paths and ordered forests of N − 1 nodes. |
| **6.10** | 269 | How many N -bit binary strings have the property that the number of ones in the first k bits does not exceed the number of zeros, for all k? |
| **6.11** | 269 | Compare the parenthesis representation of an ordered forest to the plus-minus representation of its associated binary tree. Explain your observation. |
| **6.12** | 270 | Give a method for representing a tree with a subdivided rectangle when the ratio of the height to the width of any rectangle is between α and 1/α for constant α > 1. Find a solution for α as small as you can. |
| **6.13** | 270 | ere is an obvious correspondence where left-right symmetry in triangulations is reflected in left-right symmetry in trees. What about rotations? Is |
| **6.14** | 272 | Consider strings of N integers with two properties: first, if k > 1 is in the string, then so is k − 1, and second, some larger integer must appear somewhere between any two occurrences of any integer. Show that the number of such strings of length N is described by the Catalan numbers, and find a direct correspondence with trees or binary trees. |
| **6.15** | 274 | Give recursive formulations describing path length and height in general trees. |
| **6.16** | 274 | Give recursive formulations for the number of leaves in binary trees and in general trees. |
| **6.17** | 275 | Prove that the height of a binary tree with N external nodes has to be at least lgN . |
| **6.18** | 275 | [Kraft equality] Let kj be the number of external nodes at level j in a binary tree. e sequence {k0 , k1 , . . . , kh } (where h is the height of the tree) describes the profile of the tree. ∑ Show that a vector of integers describes the profile of a binary tree if and only if j 2−kj = 1. |
| **6.19** | 275 | Give tight upper and lower bounds on the path length of a general tree with N nodes. |
| **6.20** | 275 | Give tight upper and lower bounds on the internal and external path lengths of a binary tree with N internal nodes. |
| **6.21** | 275 | Give tight upper and lower bounds on the number of leaves in a binary tree with N nodes. |
| **6.22** | 280 | What is the minimum number of registers needed to evaluate the expression in Figure 6.11? |
| **6.23** | 280 | Give the binary tree corresponding to the expressions (a + b) ∗ d and ((a + b) ∗ (d − e) ∗ (f + g)) − h ∗ i. Also give the preorder, inorder, and postorder traversals of those trees. |
| **6.24** | 280 | An expression where operators have varying numbers of operands corresponds to a tree, with operands in leaves and operators in nonleaves. Give the preorder and postorder traversals of the tree corresponding to the expression ((a2 + b + c) ∗ (d4 − e2 ) ∗ (f + g + h)) − i ∗ j, then give the binary tree representation of that tree and the preorder, inorder, and postorder traversals of the binary tree. |
| **6.25** | 286 | Compute Q5 and C5 . |
| **6.26** | 286 | Show that two different permutations cannot give the same degenerate tree structure. If all N ! permutations are equally likely, what is the probability that a degenerate tree structure will result? |
| **6.27** | 286 | For N = 2n − 1, what is the probability that a perfectly balanced tree structure (all 2n external nodes on level n) will be built, if all N ! key insertion sequences are equally likely? |
| **6.28** | 286 | Show that traversing a binary search tree in preorder and inserting the keys into an initially empty tree results in the original tree. Is the same true for postorder and/or level order? Prove your answer. |
| **6.29** | 291 | Derive this equation from the recurrence for path length. |
| **6.30** | 293 | Justify directly the equation given in the proof of eorem 6.4 for the CGF for path length in general trees (as we did for binary trees). |
| **6.31** | 293 | Use the rotation correspondence between general trees and binary trees to derive the average path length in random general trees from the corresponding result on random binary trees. |
| **6.32** | 295 | For each of the trees in Figure 6.12, give permutations that would cause Program 1.2 to partition as described by the tree. |
| **6.33** | 297 | What is the probability that the successful search cost is 2? |
| **6.34** | 297 | Construct a random 1000-node binary search tree by inserting 1000 random keys into an initially empty tree, then do 10,000 random searches in that tree and plot a histogram of the search costs, for comparison with Figure 1.4. |
| **6.35** | 297 | Do the previous exercise, but generate a new tree for each trial. |
| **6.36** | 297 | [Lynch, cf. Knuth] By calculating p′′N (1) + p′N (1) − p′ (1)2 . show that (2) the variance of unsuccessful search cost is 2HN +1 − 4HN +1 + 2. |
| **6.37** | 297 | [Knott, cf. Knuth] Using a direct argument with PGFs, find the average and variance for the cost of a successful search. |
| **6.38** | 297 | Express the PGF for successful search in terms of the PGF for unsuccessful search. Use this to express the average and variance for successful search in terms of the average and variance for unsuccessful search. |
| **6.39** | 301 | Find the average number of children of the root in a random Catalan tree of N nodes. (From Figure 6.3, the answer is 2 for N = 5.) |
| **6.40** | 301 | In a random Catalan tree of N nodes, find the proportion of nodes with one child. |
| **6.41** | 301 | In a random Catalan tree of N nodes, find the proportion of nodes with k children for k = 2, 3, and higher. |
| **6.42** | 301 | Internal nodes in binary trees fall into one of three classes: they have either two, one, or zero external children. What fraction of the nodes are of each type, in a random binary Catalan tree of N nodes? |
| **6.43** | 301 | Answer the previous question for random binary search trees. |
| **6.44** | 301 | Set up BGFs for the number of leaves and estimate the variance for each of the three random tree models. |
| **6.45** | 301 | Prove relationships analogous to those in |
| **6.46** | 307 | Prove that Fh+1 (z) = |
| **6.47** | 307 | Show the details of the expansion of G(z) − G[h−2] (z) with the Lagrange inversion theorem (see §6.12). |
| **6.48** | 307 | Provide a detailed proof of the corollary, including proper attention to the error terms. |
| **6.49** | 307 | Draw a plot of the function H(x). |
| **6.50** | 309 | Find a relationship between the stack height of a binary tree and the height of the corresponding forest. |
| **6.51** | 314 | Find [z n ]A(z) when A(z) is defined by z = A(z)/(1 − A(z)). |
| **6.52** | 314 | What is the functional inverse of ez − 1? What do we get in terms of power series by applying Lagrange inversion? |
| **6.53** | 314 | Find the number of n-node 3-forests of ternary trees. |
| **6.54** | 315 | Find the number of 4-ary trees, where every node either is external or has a sequence of four subtrees. |
| **6.55** | 320 | How many of the 2( 2 ) graphs on N labelled vertices are free trees? |
| **6.56** | 320 | For each of the four properties listed earlier, show that the other three are implied. ( is is 12 exercises in disguise!) |
| **6.57** | 323 | Which free tree structure on six nodes appears most frequently among all ordered trees on six nodes? (Figure 6.22 shows that the answer for ve nodes is the tree in the middle.) |
| **6.58** | 323 | Answer the previous exercise for seven, eight, and more nodes, going as high as you can. |
| **6.59** | 324 | Give an efficient algorithm that takes as input a set of edges that represents a tree and produces as output a parenthesis system representation of that tree. |
| **6.60** | 324 | Give an efficient algorithm that takes as input a set of edges that represents a tree and produces as output a binary tree representation of that tree. |
| **6.61** | 324 | Give an efficient algorithm that takes as input two binary trees and determines whether they are different when considered as unordered trees. |
| **6.62** | 325 | [cf. Aho, Hopcroft, and Ullman] Give an efficient algorithm that takes as input two parenthesis systems and determines whether they represent the same rooted tree. |
| **6.63** | 326 | Write a program to compute all the values of UN that are smaller than the maximum representable integer in your machine, using the method suggested in the text. Estimate how many (unlimited precision) arithmetic operations would be required for large N , using this method. |
| **6.64** | 326 | [cf. Harary-Palmer] Show that ) ∑ ( ∑ N UN +1 = kUk TN +1−kl 1≤k≤N |
| **6.65** | 326 | Give a polynomial-time algorithm to generate a random rooted tree of size N . |
| **6.66** | 327 | Show that the number of rooted trees of N nodes is bounded below by the number of free trees of N nodes and bounded above by N times the number of free trees of N nodes. ( us, the exponential order of growth of the two quantities is the same.) |
| **6.67** | 327 | Let F (z) be the OGF for free trees. Show that 1 1 F (z) = U (z) − U (z)2 + U (z 2 ). 2 2 |
| **6.68** | 327 | Derive the asymptotic formula for free trees given in Table 6.3, using the formula given in eorem 6.12 for rooted (unordered) trees and the previous exercise. |
| **6.69** | 328 | Which tree of four nodes has the most different labellings? Answer this question for ve, six, and more nodes, going as high as you can. |
| **6.70** | 331 | What is the number of labelled rooted forests of N nodes? |
| **6.71** | 331 | Show that the EGF that enumerates labelled free trees is equal to C(z) − C(z)2/2. |
| **6.72** | 334 | Find the number of k-forests with a total of N internal nodes. |
| **6.73** | 334 | Derive the asymptotic estimate given in of t-ary trees with N internal nodes. |
| **6.74** | 336 | Use the identity 1 + u + u2 + . . . + ut = (1 − ut+1 )/(1 − u) to find a sum expression for the number of t-restricted trees with N nodes. |
| **6.75** | 336 | Write a program that, given t, will compute the number of t-restricted trees for all values of N for which the number is smaller than the maximum representable integer in your machine. |
| **6.76** | 336 | Find the number of “even” t-restricted trees, where all nodes have an even number of, and less than t, children. |
| **6.77** | 336 | Without solving the enumeration problem in detail, try to place the following classes of trees in increasing order of their cardinality for large N : 3-ary, 3-restricted, 2-3, and AVL. |
| **6.78** | 337 | Build a table giving the number of AVL and 2-3 trees with fewer than 15 nodes that are different when considered as unordered trees. |
| **6.79** | 337 | Prove the functional equations on the generating functions for AVL and 2-3 trees given in Table 6.6. |
