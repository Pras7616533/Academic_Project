#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Function to partition the array on the basis of pivot
int partition(int arr[], int low, int high) {
  int pivot = arr[low]; // Choosing the first element as the pivot
  int left = low + 1;
  int right = high;

  while (left <= right) {
    // Increment left index until an element greater than the pivot is found
    while (left <= right && arr[left] <= pivot)
      left++;

    // Decrement right index until an element less than the pivot is found
    while (left <= right && arr[right] > pivot)
      right--;

    // Swap elements at left and right indices
    if (left < right) {
      swap(&arr[left], &arr[right]);
    }
  }

  // Swap the pivot with the element at the right index
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

// Quick Sort Function
void quick_sort(int arr[], int low, int high) {
  if (low < high) {
    // Partition the array and get the pivot index
    int pivot_index = partition(arr, low, high);

    // Recursively sort elements before and after partition
    quick_sort(arr, low, pivot_index - 1);
    quick_sort(arr, pivot_index + 1, high);
  }
}

// Helper function to print the array
void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int size, i;
  printf("Enter the size of array:\n");
  scanf("%d", &size);
  int arr[size];
  printf("Enter n elements:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Original array: \n");
  print_array(arr, size);

  quick_sort(arr, 0, size - 1);

  printf("\nSorted array: \n");
  print_array(arr, size);

  return 0;
}
