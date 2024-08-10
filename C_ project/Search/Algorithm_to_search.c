#include <stdio.h>

// Sequential search function
int sequential(int a[], int key, int n) {
    for (int i = 0; i < n; i++) {
        printf("Checking index %d: %d\n", i, a[i]);
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

// Binary search function
int bin_search(int a[], int key, int j) {
    int i = 0;
    while (i <= j) {
        int c = (i + j) / 2;
        printf("Checking range [%d, %d], midpoint %d: %d\n", i, j, c, a[c]);
        if (a[c] == key) {
            return c;
        }
        if (key > a[c]) {
            i = c + 1;
        } else {
            j = c - 1;
        }
    }
    return -1;
}

// Main function
int main() {
    int a[50], n, key, i, tem;

    printf("\nNo. of elements: ");
    scanf("%d", &n);
    
    if (n > 50) {
        printf("Array size exceeds limit of 50.\n");
        return 1;
    }

    printf("Is your array sorted?\n1 for unsorted\n2 for sorted\n");
    scanf("%d", &tem);
    
    if (tem != 1 && tem != 2) {
        printf("Invalid input for sorting option.\n");
        return 1;
    }

    printf("\nEnter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Element to be searched: ");
    scanf("%d", &key);

    if (tem == 1) {
        i = sequential(a, key, n);
    } else {
        i = bin_search(a, key, n - 1);
    }

    if (i == -1) {
        printf("\nNot found");
    } else {
        printf("\nFound at location = %d", i + 1);
    }
    printf("\n");
    return 0;
}
