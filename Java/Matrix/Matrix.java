import java.util.Scanner;

public class Matrix {
        private static Scanner in = new Scanner(System.in);
        public int[][] inMatrix(int n, int m) {
                int[][] a = new int[n][m];
                System.out.print("Enter the element " + n + " × " + m + " of matrix: ");
                for(int i = 0; i < n; i++) {
                        for(int j = 0; j < m; j++) {
                                a[i][j] = in.nextInt();
                        }
                }
                return a;
        }
        public void disMatrix(int[][] a, int n, int m) {
                System.out.print("The element of " + n + " × " + m + " are:\n\t");
                for(int i = 0; i < n; i++) {
                        for(int j = 0; j < m; j++) {
                                System.out.print(a[i][j] + " ");
                        }
                        System.out.print("\n\t");
                }
                System.out.println();
        }
        public static void main(String[] args) {
                Matrix x = new Matrix();
                System.out.print("Enter the n: ");
                int n = in.nextInt();
                System.out.print("Enter the m: ");
                int m = in.nextInt();
                int[][] a = x.inMatrix(n,m);
                x.disMatrix(a,n,m);
        }
}
