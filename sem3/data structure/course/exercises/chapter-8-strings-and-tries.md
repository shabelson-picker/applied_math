# Chapter 8 exercises — Strings and Tries

60 exercises, extracted from the textbook PDF.

> **Caveats.** (1) Statements are auto-extracted; `fi`/`fl` ligatures dropped by the
> PDF text layer were repaired by a cleanup pass (a rare odd gap may remain).
> (2) A ⚠ marks exercises whose statement includes a **displayed formula** that
> did not survive extraction — read those in the book at the cited page.
> The book PDF is always authoritative.

| # | p. | Exercise |
|---|---|---|
| **8.1** | 425 | Give two recurrences satisfied by [z N ]BP (z). |
| **8.2** | 425 | How long a string of random bits should be taken to be 99% sure that there are at least three consecutive 0s? |
| **8.3** | 425 | How long a string of random bits should be taken to be 50% sure that there are at least 32 consecutive 0s? |
| **8.4** | 425 | Show that (( ) ( )) ∑ N − Pi N i N −(P +1)i −P N − P (i + 1) [z ]BP (z) = (−1) 2 −2 . i i i |
| **8.5** | 426 | Find the bivariate generating function associated with the number of leading 1 bits in a random bitstring and use it to calculate the average and standard deviation of this quantity. |
| **8.6** | 426 | By considering bitstrings with no runs ∑ of two consecutive 0s, evaluate the following sum involving Fibonacci numbers: j≥0 Fj /2j . |
| **8.7** | 426 | Find the BGF for the length of the longest run of 0s in bitstrings. |
| **8.8** | 428 | What is the standard deviation of the random variable marking the first occurrence of a run of P 0s in a random bitstring? |
| **8.9** | 428 | Use a computer algebra system to plot the average length of the longest run of 0s in a random bitstring of N bits, for 2 < N < 100. |
| **8.10** | 428 | How many bits are examined by the basic algorithm given in the previous section to find the first string of P 0s in a random bitstring? |
| **8.11** | 431 | Calculate the expected position of the first occurrence of each of the following patterns in a random bitstring: (i) P −1 0s followed by a 1; (ii) a 1 followed by P − 1 0s; (iii) alternating 0-1 string of even length; (iv) alternating 0-1 string of odd length. |
| **8.12** | 431 | Which bit patterns of length P are likely to appear the earliest in a random bitstring? Which patterns are likely to appear the latest? |
| **8.13** | 431 | Does the standard deviation of the random variable marking the first position of a bit pattern of length P in a random bitstring depend on the pattern? |
| **8.14** | 431 | Suppose that a monkey types randomly at a 32-key keyboard. What is the expected number of characters typed before the monkey hits upon the phrase THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG? |
| **8.15** | 431 | Suppose that a monkey types randomly at a 32-key keyboard. What is the expected number of characters typed before the monkey hits upon the phrase TO BE OR NOT TO BE? |
| **8.16** | 436 | Give the OGFs and REs for gambler’s ruin sequences with height no greater than 4, 5, and 6. |
| **8.17** | 436 | Give a regular expression for the set of all strings having no occurrence of the pattern 101101. What is the corresponding generating function? |
| **8.18** | 436 | What is the average position of the second disjoint string of P 0s in a random bitstring? |
| **8.19** | 436 | Find the number of different ways to derive each string of N 0s with the RE 0*00. Answer the same question for the RE 0*00*. |
| **8.20** | 436 | One way to generalize REs is to specify the number of copies implicit in the star operation. In this notation the first sequence in Figure 8.2 is (10)22 and the second sequence is (10)3 1(10)5 0(10)3 1(10)7 0(10)2 , which better expose their structure. Give the generalized REs for the other two sequences in Figure 8.2. |
| **8.21** | 436 | Find the average number of 0s appearing before the first occurrence of each of the bit patterns of length 4 in a random bitstring. |
| **8.22** | 436 | Suppose that a monkey types randomly at a 2-key keyboard. What is the expected number of bits typed before the monkey hits upon a string of 2k alternating 0s and 1s? |
| **8.23** | 438 | Give the state transitions for the FSA in Figure 8.3 for searching in the text 010101010101010101010. |
| **8.24** | 438 | Give the state transitions for the FSA in Figure 8.3 for searching in the text 1110010111010110100010100101010011110100110. |
| **8.25** | 438 | Give a text string of length 25 that maximizes (among all strings of length 25) the number of times the KMP automaton from Figure 8.3 reaches step 2. |
| **8.26** | 440 | Give the KMP state transition table for the pattern 110111011101. |
| **8.27** | 440 | Give the state transitions made when using the KMP method to determine whether the text 01101110001110110111101100110111011101 contains the pattern in the previous exercise. |
| **8.28** | 440 | Give the state transition table for a string of 2k alternating 0s and 1s. |
| **8.29** | 440 | Give the KMP state transition table for the pattern 313131, assuming a 4-character alphabet 0, 1, 2, and 3. Give the state transitions made when using the KMP method to determine whether the text 1232032313230313131 contains this pattern. |
| **8.30** | 440 | Prove directly that the language recognized by a deterministic FSA has an OGF that is rational. |
| **8.31** | 440 | Write a computer algebra program that computes the standard rational form of the OGF that enumerates the language recognized by a given deterministic FSA. |
| **8.32** | 446 | Given a random bitstring of length N , how many of its prefixes have equal numbers of 0s and 1s, on the average? |
| **8.33** | 446 | What is the probability that the number of 0s in a random bitstring never exceeds the number of 1s? |
| **8.34** | 446 | Given a random bitstring of length N , how many of its prefixes have k more 0s than 1s, on the average? What is the probability that the number of 0s in a random bitstring never exceeds the number of 1s by k? |
| **8.35** | 447 | Suppose that a stack has a fixed capacity M . What is the probability that a random sequence of N push and pop operations on an initially empty pushdown stack never tries to pop the stack when it is empty or push when it is full? |
| **8.36** | 447 | [Pratt] Consider a data structure with one “insert” and two different types of “remove” operations. What is the probability that a random sequence of operations of length N is legal in the sense that the data structure is empty before and after the sequence, and “remove” is always applied to a nonempty data structure? |
| **8.37** | 447 | Answer the previous exercise, but replace one of the “remove” operations with an “inspect” operation, which is applied to a nonempty data structure but does not remove any items. |
| **8.38** | 447 | Suppose that a monkey types random parentheses, hitting left and right with equal probability. What is the expected number of characters typed before the monkey hits upon a legal balanced sequence? For example, ((())) and (()()()) are legal but ((()) and (()(() are not. |
| **8.39** | 447 | Suppose that a monkey types randomly at a 26-key keyboard that has 26 letters A through Z. What is the expected number of characters typed before the monkey types a palindrome of length at least 10? at is for some k ≥ 10, what is the expected number of characters typed before the last k characters are the same when taken in reverse order? Example: KJASDLKUYMBUWKASDMBVJDMADAMIMADAM. |
| **8.40** | 447 | Suppose that a monkey types randomly at a 32-key keyboard that has 26 letters A through Z; the symbols +, *, (, and ); a space key; and a period. What is the expected number of characters typed before the monkey hits upon a legal regular expression? Assume that spaces can appear anywhere in a regular expression and that a legal regular expression must be enclosed in parentheses and have exactly one period, at the end. |
| **8.41** | 453 | Give the three tries corresponding to the minimal sets of strings for Figure 8.5, but reading each string in right-to-left order. () |
| **8.42** | 453 | ere are 85 = 56 different sets of ve three-bit bitstrings. Which trie is associated with the most of these sets? e least? |
| **8.43** | 453 | Give the number of different tries that have the same structure as each of the tries in Figures 8.4 and 8.5. |
| **8.44** | 453 | How many different tries are there with N external nodes? |
| **8.45** | 453 | What proportion of the external nodes are void in a “random” trie (assuming each different trie structure to be equally likely to occur)? |
| **8.46** | 453 | Given a finite set of strings, devise a simple test to determine whether there are any void external nodes in the corresponding trie. |
| **8.47** | 458 | How many bits are examined when using the trie in the middle in Figure 8.5 to search for one of the patterns 1010101010 or 1010101011 in the text string 10010100111110010101000101010100010010? |
| **8.48** | 458 | Given a set of pattern strings, describe a method for counting the number of times one of the patterns occurs in a text string. |
| **8.49** | 458 | Build the suffix trie for patterns of eight bits or longer from the text string 10010100111110010101000101010100010010. |
| **8.50** | 458 | Give the suffix tries corresponding to all four-bit strings. |
| **8.51** | 458 | Give the Aho-Corasick FSA for the set of strings 01 100 1011 010. |
| **8.52** | 463 | Show that AN /N is equal to 1/ln2 plus a uctuating term. |
| **8.53** | 463 | Write a program to compute AN to within 10−9 for N < 106 and explore the oscillatory nature of AN /N . |
| **8.54** | 463 | Multiply both sides of the functional equation for C(z) by e−z to transform it into a simpler equation on Ĉ(z) ≡ e−z C(z). Use this equation to find ĈN = [z N ]Ĉ(z). en apply the convolution implied by C(z) = ez Ĉ(z) to show that ∑ (N ) k(−1)k CN = . k 1 − 1/2k−1 2≤k≤N |
| **8.55** | 463 | Show directly that the sum given in the previous exercise is equivalent to the expression for CN given in the proof of eorem 8.8. |
| **8.56** | 464 | Solve the recurrence for RN given in the proof of within the oscillating term. |
| **8.57** | 464 | Solve the recurrence for pN given in the proof of within the oscillating term. |
| **8.58** | 464 | Analyze the version of the leader election algorithm that repeats rounds until a success occurs. |
| **8.59** | 467 | How many bits are examined, on the average, by an algorithm that searches for runs of M 0s in a text string (M not small) by, for k = 1, 2, 3, and higher, checking the t bits ending at kM and, if they are all 0, checking the bits on each side to determine the length of the run? Assume that the text string is random except for a run of M 0s hidden somewhere within it. |
| **8.60** | 467 | Give a way to adapt the method of the previous exercise to find the longest string of 0s in a random bitstring. |
