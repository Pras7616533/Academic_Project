import java.util.Scanner;

public class SearchArray {

        private static Scanner in = new Scanner(System.in);
        int[] a;
        int n, key;

        SearchArray() {
                System.out.print("Enter the number of element: ");
                n = in.nextInt();
                a = new int[n];
                System.out.print("Enter the " + n + " element: ");
                for (int i = 0; i < n; i++) {
                        a[i] = in.nextInt();
                }
                System.out.print("Enter the key element to find: ");
                key = in.nextInt();
        }

        void search() {
                int idx = -1;
                for (int i = 0; i < n; i++) {
                        if (a[i] == key) {
                                idx = i;
                        }
                }
                System.out.println("The element " + key + (idx == -1 ? " not found" : (" found at location: " + (idx + 1))));
        }

        public static void main(String[] args) {
                SearchArray s = new SearchArray();
                s.search();
        }
}
