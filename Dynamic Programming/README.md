# Dynamic Programming

Dynamic Programming (DP) is a technique that solves some particular type of problems in Polynomial Time. An algorithm is said to be of polynomial time if its running time is upper bounded by a polynomial expression in the size of the input for the algorithm, that is, T(n) = O(n^k) for some positive constant k.

## Solve a DP problem

[Steps to solve a DP](https://www.geeksforgeeks.org/solve-dynamic-programming-problem/?ref=lbp) -
1. Identify if it is a DP problem
2. Decide a state expression with least parameters
3. Formulate state relationship    
4. Do tabulation (or add memoization)

## Identify if it is a DP problem

- Typically, all the problems that require maximizing or minimize certain quantities or counting problems.
- All dynamic programming problems satisfy the [overlapping subproblems](https://www.geeksforgeeks.org/overlapping-subproblems-property-in-dynamic-programming-dp-1/?ref=lbp) property and most of the classic dynamic problems also satisfy the [optimal substructure](https://www.geeksforgeeks.org/optimal-substructure-property-in-dynamic-programming-dp-2/?ref=lbp) property.

[...read more](https://www.freecodecamp.org/news/follow-these-steps-to-solve-any-dynamic-programming-interview-problem-cc98e508cd0e/)

## Overlapping Subproblems

Like Divide and Conquer, Dynamic Programming combines solutions to sub-problems. Dynamic Programming is mainly used when solutions of the same subproblems are needed again and again. So Dynamic Programming is not useful when there are no common (overlapping) subproblems because there is no point storing the solutions if they are not needed again.

[...read more](https://www.geeksforgeeks.org/overlapping-subproblems-property-in-dynamic-programming-dp-1/)

## Optimal Substructure

A given problems has Optimal Substructure Property if optimal solution of the given problem can be obtained by using optimal solutions of its subproblems.

[...read more](https://www.geeksforgeeks.org/optimal-substructure-property-in-dynamic-programming-dp-2/?ref=lbp)
