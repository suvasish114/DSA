# Floyd cycle finding algorithm

The purpose is to determine whether the linked list has a cycle or not. This is the firstest method to find cycle in a linked list. The terminology of this algorithm is-

- Traverse linked list using two pointers named `slow_ptr` and `fast_ptr`.
- Move the pointer `slow_ptr` by 1 and `fast_ptr` by 2.
- If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop.

## Algorithm

**INPUT:** Pointer to a linked list say `HEAD`.

**OUTPUT:** Return `true` if linked list contains loop else return `false`.

**DATA STRUCTURE:** A singly linked list.

**STEPS:** 
```
    If(HEAD == NULL || HEAD->link == NULL) then
        Return false
        Exit
    Else
        // initializing staring pointers
        fast_ptr = HEAD
        slow_ptr = HEAD
        While(HEAD != NULL) do
            // move slow_ptr by 1 step and fast_ptr by 2 steps
            slow_ptr = slow_ptr->link;
            fast_ptr = fast_ptr->link->link;
            If(slow_ptr == fast_ptr)then
                Return true
            EndIf
            HEAD = HEAD->link
        EndWhile
        Return false
    EndIf
```

## Complexity

**Time complexity:** O(n). Only one traversal of the loop is needed.

**Auxiliary Space:** O(1). There is no space required.

## References

- https://www.codingninjas.com/blog/2020/09/09/floyds-cycle-detection-algorithm/

- https://www.geeksforgeeks.org/how-does-floyds-slow-and-fast-pointers-approach-work/