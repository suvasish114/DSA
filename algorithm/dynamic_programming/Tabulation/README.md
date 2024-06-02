# Tabulation

The tabulated program for a given problem builds a table in bottom-up fashion and returns the last entry from the table. For example, for the same Fibonacci number, we first calculate fib(0) then fib(1) then fib(2) then fib(3), and so on. So literally, we are building the solutions of subproblems bottom-up. 

## Steps

- Set a initial value of the table.
- loop through the entire sequence.
- return the last calculated value.

## Implementation

- [Java](./Tabulation.java)