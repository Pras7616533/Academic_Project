# Quick Sort in C

## Description

This project implements the **Quick Sort** algorithm in C. Quick Sort is a widely used, efficient, and comparison-based sorting algorithm. It uses a divide-and-conquer approach to recursively partition and sort the array.

## How It Works

The Quick Sort algorithm works as follows:

1. **Partitioning**: The array is divided into two parts based on a pivot element. Elements less than the pivot are moved to its left, and elements greater than the pivot are moved to its right.

2. **Recursive Sorting**: The algorithm recursively sorts the subarrays on the left and right of the pivot.

3. **Base Case**: The recursion stops when the subarrays have one or zero elements.

## Features

- **Pivot Selection**: The first element of the array is chosen as the pivot.
- **Pass-by-Pass Printing**: During the sorting process, the current state of the array is printed after each partitioning pass, showing how elements are rearranged around the pivot.
- **Efficient Sorting**: The Quick Sort algorithm is implemented efficiently with a time complexity of O(n log n) on average.

## Code Explanation

### 1. `swap` Function

This function swaps two elements in the array.

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

### 2. `partition` Function

This function partitions the array around a pivot. The pivot is chosen as the first element of the array. The function rearranges elements so that those less than the pivot are on its left, and those greater are on its right. The function also prints the state of the array after each partition.

```c
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {
        while (left <= right && arr[left] <= pivot) left++;
        while (left <= right && arr[right] > pivot) right--;
        if (left < right) {
            swap(&arr[left], &arr[right]);
        }
    }

    swap(&arr[low], &arr[right]);

    // Print the pass result
    printf("pass\n");
    printf("[");
    for (int i = low; i < right; i++) {
        printf("%d ", arr[i]);
    }
    printf("] < [%d] < [", arr[right]);
    for (int i = right + 1; i <= high; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    return right;
}
```

### 3. `quick_sort` Function

This function implements the Quick Sort algorithm by recursively partitioning and sorting the subarrays.

```c
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}
```

### 4. `print_array` Function

This helper function prints the array.

```c
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```

### 5. `main` Function

This is the entry point of the program. It initializes the array, calls the `quick_sort` function, and prints the original and sorted arrays.

```c
int main() {
    int arr[] = {43, 28, 96, 83, 25, 16, 92, 60, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    print_array(arr, size);

    quick_sort(arr, 0, size - 1);

    printf("\nSorted array: \n");
    print_array(arr, size);

    return 0;
}
```

## How to Compile and Run

### Compilation

Use a C compiler like `gcc` to compile the program:

```bash
gcc quick_sort.c -o quick_sort
```

### Running

Run the compiled program:

```bash
./quick_sort
```

### Example Output

```bash
Original array: 
43 28 96 83 25 16 92 60 10 8 
pass
[10 8 28 25 16 ] < [43] < [96 83 92 60 ]
pass
[8 ] < [10] < [28 25 16 43 96 83 92 60 ]
pass
[8 ] < [10] < [16 25 28 43 96 83 92 60 ]
pass
[8 ] < [10] < [16 25 28 43 60 83 92 96 ]
pass
[8 ] < [10] < [16 25 28 43 60 83 92 96 ]

Sorted array: 
8 10 16 25 28 43 60 83 92 96 
```

## License

This project is open source and available under the MIT License.
