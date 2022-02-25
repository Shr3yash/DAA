# DaAoA

Design and Analysis of Algorithms

  ## Algorithm: Merge Sort.
  
  ### Merge Function
  
    Create a temporary array to store the sorted list (b)
    Create and initialise three pointers, i = lower bound, j = mid + 1, k = 0
    While(arr[i] <= mid && arr[j]), iterate through the sub-lists
    If(arr[i] <= arr[j]), b[k] = arr[i], increment i & k
    Else, b[k] = arr[j], increment j & k
    While (j <= upper bound), b[k] = arr[j]
    While (I <= mid), b[k] = arr[i]
    Transfer elements of temporary array in the original one

  ### Merge Sort Function
  
    If (lower bound < upper bound), mid = (lower + upper) / 2
    Recursively call the mergeSort function to keep creating 2 sub-lists until there is only one element left
    Call the merge function to perform 2 Way merging on the two sub-lists

  ### Conclusion
  
    Merge sort is an example of Divide and Conquer algorithm
    It forms a tree structure
    The height of the tree is O(logn), where n is the number of elements in the array
    ‘n’ elements are merged at every level of the tree/pass
    The time complexity for worst and average case is O(n*logn)
