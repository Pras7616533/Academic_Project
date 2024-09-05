# Heap sort
## Step-by-Step Explanation of the Solution

1. **Initial Setup:**
   - An array of integers is given, e.g., `{12, 11, 13, 5, 6, 7}`.
   - The `main()` function initializes the array, calculates its size, and calls the `heapSort()` function to sort it.

2. **Heap Sort Function (`heapSort`):**
   - **Building the Max Heap:**
     - The max heap is constructed from the input array. A max heap is a complete binary tree where each parent node is greater than or equal to its child nodes.
     - Starting from the last non-leaf node (`n/2 - 1`), the `heapify()` function is called on each node to ensure the heap property is maintained.
   - **Extracting Elements to Sort the Array:**
     - After building the max heap, the sorting begins.
     - The root element (the largest element in the heap) is swapped with the last element of the heap.
     - The size of the heap is reduced, and the `heapify()` function is called on the root to restore the heap property.
     - This process is repeated, reducing the heap size by one each time, until the entire array is sorted.

3. **Heapify Function (`heapify`):**
   - **Purpose:** The function ensures that the subtree rooted at index `i` follows the heap property.
   - **Steps in Heapify:**
     - **Identify the Largest Element:** 
       - Start by assuming the root node is the largest.
       - Compare the root with its left child (`2 * i + 1`) and right child (`2 * i + 2`).
       - Update the largest element if either child is greater than the current largest.
     - **Swap if Necessary:**
       - If the root is not the largest, swap it with the largest child.
       - Recursively call `heapify()` on the affected subtree to ensure the heap property is maintained.
   - The `display()` function is called after each heapify operation to show the current state of the array.

4. **Display Function (`display`):**
   - This function prints the current state of the array to help visualize how the heap sort algorithm manipulates the data during execution.

## Example Execution Trace

Given the array `{12, 11, 13, 5, 6, 7}`, the program proceeds as follows:

1. **Original array:** 
   - The array is displayed as `12 11 13 5 6 7`.

2. **Building Max Heap:**
   - Heapify is called starting from the last non-leaf node:
     - After heapifying from the index `2`, the array might be `12 11 13 5 6 7` (no change as it's already heapified).
     - Moving up, heapifying from index `1` may adjust it to `12 11 13 5 6 7`.
     - Finally, heapifying from index `0` will transform it into a max heap.

3. **Sorting the Array:**
   - The largest element `13` is swapped with the last element, then heapify is called to restore the heap.
   - The next largest `12` is swapped, and heapify is called again, reducing the heap size each time.
   - This continues until the entire array is sorted.

4. **Sorted array:** 
   - The array is displayed as `5 6 7 11 12 13`.
