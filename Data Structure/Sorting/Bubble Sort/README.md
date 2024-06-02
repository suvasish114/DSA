# Bubble Sort

- Stability: `unstable`
- Inplace: `yes`

## Algorithm

```
BubbleSort(A){                      // A is array of number to sort
    L = length of A
    While L != 0, do{
        For i in (0 to L-1), do{
            If (A[i] > A[i+1]){
                Swap(A[i], A[i+1])  // swap
            }
        }
        L -= 1
    }
}
```

## Visualization

![bubble sort visualization](./bubblesort.png)

## Complexity

- Time: $O(n^2)$
- Space: $O(1)$

## Code

|Language|Code|
|-|-|
|C++|[bubbleSort.cpp](./bubbleSort.cpp)|
|Java|[bubbleSort.java](./bubbleSort.java)|
|Python|[bubbleSort.py](./bubbleSort.py)|

## References

- [geeksforgeeks.org](https://www.geeksforgeeks.org/bubble-sort/) (html)
- [cs.duke.edu](https://users.cs.duke.edu/~ola/bubble/bubble.html) (html)
- [michael sambol](https://youtu.be/xli_FI7CuzA) (youtube)
- [abdul bari](https://youtu.be/p__ETf2CKY4) (youtube)
