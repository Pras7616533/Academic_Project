# Bubble Sort in C

## Description

This project implements the **Bubble Sort** algorithm in C. Bubble Sort is a simple and intuitive sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## How It Works

The Bubble Sort algorithm works as follows:

1. **Comparison**: For each element in the array, it is compared with the next element.
2. **Swapping**: If an element is greater than the next element, they are swapped.
3. **Passes**: The process is repeated for multiple passes until the array is sorted.
4. **Visualization**: The state of the array is displayed after each comparison during every pass, allowing you to see how the array is being sorted step-by-step.

## Code Explanation

### 1. `display` Function

This function prints the elements of the array.

```c
void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
```

### 2. `main` Function

This is the entry point of the program. It reads the size of the array and its elements from the user, then sorts the array using the Bubble Sort algorithm, and finally prints the sorted array.

```c
int main(void) {
    int a[50], n, pass, i, j, temp = 0;
    setbuf(stdout, NULL);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter n elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");

    // Computation of Bubble Sort
    for (pass = 1; pass <= n-1; pass++) {
        printf("pass %d:\n", pass);
        for (j = 0; j < n-pass; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            display(a, n);
            printf("\n");
        }
        printf("\n");
    }

    printf("The sorted array after Bubble sort is:\n");
    display(a, n);
    printf("\n");
    return 0;
}
```

### Key Steps:

- **Input**: The program first takes input from the user, including the number of elements (`n`) and the elements themselves.
- **Bubble Sort**: The sorting process begins, where each pass through the array is printed, showing the array's state after each comparison and potential swap.
- **Output**: Finally, the sorted array is printed after the sorting process is complete.

### Output Example

```bash
Enter the value of n:
5
Enter n elements:
64
34
25
12
22

pass 1:
34 64 25 12 22 
34 25 64 12 22 
34 25 12 64 22 
34 25 12 22 64 

pass 2:
25 34 12 22 64 
25 12 34 22 64 
25 12 22 34 64 

pass 3:
12 25 22 34 64 
12 22 25 34 64 

pass 4:
12 22 25 34 64 

The sorted array after Bubble sort is:
12 22 25 34 64 
```

## How to Compile and Run

### Compilation

Use a C compiler like `gcc` to compile the program:

```bash
gcc bubble_sort.c -o bubble_sort
```

### Running

Run the compiled program:

```bash
./bubble_sort
```

### Example Output

The program will prompt you to enter the number of elements and the elements themselves, and then it will display the sorting process pass by pass.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and distribute this code as you wish.
