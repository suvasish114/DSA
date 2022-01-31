# Memoization

(Top Down) The memoized program for a problem is similar to the recursive version with a small modification that looks into a lookup table before computing solutions. We initialize a lookup array with all initial values as NIL. Whenever we need the solution to a subproblem, we first look into the lookup table. If the precomputed value is there then we return that value, otherwise, we calculate the value and put the result in the lookup table so that it can be reused later.

## Steps

- make a recursive function.
- make a global table to store resultant values.
- fill the table with -1.
- `if(table[n] == -1)` then call the recursive function, else return `table[n]`.

##  Implementation
- Java: [Fibonacci.java](./Fibonacci.java)