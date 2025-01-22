import java.util.Scanner;
public class MinMaxArray {

        private static Scanner in = new Scanner(System.in);
        int[] a;
        int n;

        MinMaxArray() {
                System.out.print("Enter the number of element: ");
                n = in.nextInt();
                a = new int[n];
                System.out.print("Enter the " + n + " element: ");
                for (int i = 0; i < n; i++) {
                        a[i] = in.nextInt();
                }
        }

        void minArray() {
                int min = a[0];
                for (int i = 0; i < n; i++) {
                        if (min > a[i]) {
                                min = a[i];
                        }
                }
                System.out.println("The Minimum element " + min);
        }

        void maxArray() {
                int max = a[0];
                for (int i = 0; i < n; i++) {
                        if (max < a[i]) {
                                max = a[i];
                        }
                }
                System.out.println("The Maximum element " + max);
        }

        public static void main(String[] args) {
                MinMaxArray s = new MinMaxArray();
                s.minArray();
                s.maxArray();
        }

}
