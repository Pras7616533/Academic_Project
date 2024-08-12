# Insertion Sort in C

## Description

This project implements the **Insertion Sort** algorithm in C. Insertion Sort is a simple and efficient comparison-based sorting algorithm that builds the final sorted array one element at a time. It is much like the way you might sort playing cards in your hands: each new card is inserted into its correct position relative to those already sorted.

## How It Works

The Insertion Sort algorithm works as follows:

1. **Starting from the second element**: The algorithm considers one element at a time and inserts it into its correct position relative to the previously sorted elements.

2. **Shifting Elements**: If the current element is smaller than any of the previously sorted elements, those elements are shifted to the right to make space for the current element.

3. **Insertion**: The current element is placed in its correct position.

4. **Visualization**: The state of the array is displayed before and after each pass, allowing you to observe how the array is sorted step-by-step.

## Code Explanation

### 1. `display` Function

This function prints the elements of the array.

```c
void display (int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
```

### 2. `insertion` Function

This function implements the Insertion Sort algorithm. It iterates over each element in the array, compares it with the previously sorted elements, and inserts it into the correct position.

```c
void insertion (int a[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        printf("Pass %d:\n", i);
        display(a, n);
        printf("\n");
        
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
        
        display(a, n);
        printf("\n\n");
    }
}
```

### 3. `main` Function

This is the entry point of the program. It reads the size of the array and its elements from the user, then sorts the array using the Insertion Sort algorithm, and finally prints the sorted array.

```c
int main () {
    int a[50], n, i;
    printf("\nEnter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");

    insertion(a, n);

    printf("Sorted array is:\n");
    display(a, n);
    printf("\n");
    return 0;
}
```

### Key Steps:

- **Input**: The program first takes input from the user, including the number of elements (`n`) and the elements themselves.
- **Insertion Sort**: The sorting process begins, where each pass through the array is printed, showing the array's state before and after each insertion.
- **Output**: Finally, the sorted array is printed after the sorting process is complete.

### Output Example

```bash
Enter the number of elements:
5
Enter the array elements:
64
34
25
12
22

Pass 1:
64 34 25 12 22 
34 64 25 12 22 

Pass 2:
34 64 25 12 22 
25 34 64 12 22 

Pass 3:
25 34 64 12 22 
12 25 34 64 22 

Pass 4:
12 25 34 64 22 
12 22 25 34 64 

Sorted array is:
12 22 25 34 64
```

## How to Compile and Run

### Compilation

Use a C compiler like `gcc` to compile the program:

```bash
gcc insertion_sort.c -o insertion_sort
```

### Running

Run the compiled program:

```bash
./insertion_sort
```

### Example Output

The program will prompt you to enter the number of elements and the elements themselves, and then it will display the sorting process pass by pass.

## License

This project is open-source and available under the MIT License. You are free to use, modify, and distribute this code as you wish.
