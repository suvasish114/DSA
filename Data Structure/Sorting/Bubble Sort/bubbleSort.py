def bubbleSort(A):
    ''' Takes an array A and sort inplace
    Args:   A (list) = array of number
    Return: None
    '''
    l = len(A)
    while l >= 0:                               # outer loop
        flag = False
        for i in range(l-1):                    # inner loop
            if A[i] > A[i+1]:
                A[i], A[i+1] = A[i+1], A[i]     # swap
                flag = True
        l -= 1
        if flag == False:                       # for sorted list
            break

# >>> import bubbleSort
# >>> a = [1,2,6,5,4,3]
# >>> bubbleSort.bubbleSort(a)
# >>> a
# [1, 2, 3, 4, 5, 6]
