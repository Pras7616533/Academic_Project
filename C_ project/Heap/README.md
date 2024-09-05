# Heap Sort in C

This document describes a C program that implements the Heap Sort algorithm. The program sorts an array of integers using a max heap structure.

## Program Overview

The Heap Sort algorithm involves building a max heap from the array and then repeatedly extracting the maximum element from the heap to sort the array. The `heapify()` function is used to maintain the heap property.

## Code Explanation

### Explanation of Key Functions

1. **`display()` Function**:
   - This function prints the current state of the array.

2. **`heapify()` Function**:
   - Ensures that a subtree rooted at index `i` follows the heap property.
   - The function checks if the left or right child of the node is larger than the root. If so, it swaps the values and recursively heapifies the affected subtree.

3. **`heapSort()` Function**:
   - First, builds a max heap from the input array.
   - Then, repeatedly extracts the maximum element from the heap and places it at the end of the array, reducing the heap size each time.

## Sample Output

```
Original array: 12 11 13 5 6 7 

Heapifying at index 2 (value: 13)
No swaps needed for index 2
13 11 12 5 6 7 

Heapifying at index 1 (value: 11)
No swaps needed for index 1
13 11 12 5 6 7 

Heapifying at index 0 (value: 13)
No swaps needed for index 0
13 11 12 5 6 7 

Swapping root 0 (value: 13) with last element 5 (value: 7)
Heapifying the reduced heap of size 5:
Swapping [0] (value: 7) with [1] (value: 11)
11 7 12 5 6 13 

Sorted array: 5 6 7 11 12 13 
```

## How the Code Works

1. **Original Array**: Displays the unsorted array.
2. **Building Max Heap**: The program calls `heapify()` starting from the last non-leaf node, ensuring each subtree meets the heap property.
3. **Sorting**: By repeatedly extracting the root of the heap and heapifying the reduced array, the program sorts the elements.

## Conclusion

The C program demonstrates the Heap Sort algorithm with detailed print statements to understand each step of the sorting process. It helps visualize the internal workings of the heap data structure.
