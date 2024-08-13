import java.util.Scanner;

public class BubbleSort {

    public static void display(int[] a, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the value of n:");
        int n = scanner.nextInt();
        int[] a = new int[n];

        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        System.out.println();

        // Computation of bubble sort
        for (int pass = 1; pass <= n - 1; pass++) {
            System.out.println("pass " + pass + ":");
            for (int j = 0; j < n - pass; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
                display(a, n);
            }
            System.out.println();
        }

        System.out.println("The sorted array after Bubble sort is:");
        display(a, n);
    }
}
