import java.util.Scanner;

public class ReveseArray {
    private static Scanner in = new Scanner(System.in);
    int[] a;
    int n;

    ReveseArray() {
        System.out.print("Enter the number of element: ");
        n = in.nextInt();
        a = new int[n];
        System.out.print("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
    }

    void display(int[] b) {
        for (int index = 0; index < b.length; index++) {
            System.out.print(b[index] + " ");
        }
        System.out.println();
    }

    void revese() {
        int[] b = new int[n];
        for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
            b[i] = a[j];
        }
        System.out.println("The Array is: ");
        display(a);
        System.out.println("The Reversed Array is: ");
        display(b);
    }

    public static void main(String[] args) {
        ReveseArray ob = new ReveseArray();
        ob.revese();
    }
}
