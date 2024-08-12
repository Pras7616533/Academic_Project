# Selection Sort in C

## Description

This project implements the **Selection Sort** algorithm in C. Selection Sort is a simple and intuitive comparison-based sorting algorithm that divides the input array into a sorted and an unsorted region. The smallest (or largest, depending on the order) element from the unsorted region is selected and moved to the end of the sorted region. This process is repeated until the entire array is sorted.

## How It Works

The Selection Sort algorithm works as follows:

1. **Finding the Minimum**: The algorithm scans the unsorted portion of the array to find the minimum element.

2. **Swapping**: The minimum element is swapped with the first element of the unsorted portion of the array.

3. **Repeat**: The process is repeated for the rest of the unsorted portion of the array until the entire array is sorted.

4. **Visualization**: The state of the array is displayed before and after each pass, allowing you to observe how the array is sorted step-by-step.

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

This is the entry point of the program. It reads the size of the array and its elements from the user, then sorts the array using the Selection Sort algorithm, and finally prints the sorted array.

```c
int main() {
    int i, j, n, loc, temp, min, a[30];
    setbuf(stdout, NULL);

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter n elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");

    // Computation of Selection Sort
    for (i = 0; i < n - 1; i++) {
        printf("Pass %d:\n", i + 1);
        display(a, n);
        printf("\n");

        min = a[i];
        loc = i;

        for (j = i + 1; j < n; j++) {
            if (min > a[j]) {
                min = a[j];
                loc = j;
            }
        }

        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;

        display(a, n);
        printf("\n\n");
    }

    printf("\nThe sorted array after Selection sort is:\n");
    display(a, n);
    printf("\n");

    return 0;
}
```

### Key Steps:

- **Input**: The program first takes input from the user, including the size of the array (`n`) and the elements themselves.
- **Selection Sort**: The sorting process begins, where each pass through the array is printed, showing the array's state before and after selecting and swapping the minimum element.
- **Output**: Finally, the sorted array is printed after the sorting process is complete.

### Output Example

```bash
Enter the size of array:
5
Enter n elements:
64
34
25
12
22

Pass 1:
64 34 25 12 22 
12 34 25 64 22 

Pass 2:
12 34 25 64 22 
12 22 25 64 34 

Pass 3:
12 22 25 64 34 
12 22 25 64 34 

Pass 4:
12 22 25 64 34 
12 22 25 34 64 

The sorted array after Selection sort is:
12 22 25 34 64 
```

## How to Compile and Run

### Compilation

Use a C compiler like `gcc` to compile the program:

```bash
gcc selection_sort.c -o selection_sort
```

### Running

Run the compiled program:

```bash
./selection_sort
```

### Example Output

The program will prompt you to enter the number of elements and the elements themselves, and then it will display the sorting process pass by pass.

## License

This project is open-source and available under the MIT License. You are free to use, modify, and distribute this code as you wish.
