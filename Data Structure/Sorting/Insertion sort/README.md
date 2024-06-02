# Insertion sort

## Algorithm

```
inssertionSort(A)
    for j=2 to A.length
        key = A[j]
        i = j-1
        while i>0 and A[i]>key
            A[i+1]=A[i]
            i=i-1
        A[i+1]=key
```

## Complexity
|Case|Complexity|
|--|--|
|Best Case|O(n)|
|Average Case|O(n^2)|
|Worst Case|O(n^2)|

## Code

[insertionSort.cpp](./insertionSort.cpp)<br/>
[insertionSort.java](./insertionSort.java)<br/>
[insertionSort.py](./insertionSort.py)