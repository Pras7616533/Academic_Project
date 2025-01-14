import java.util.Scanner;

public class Tablefun {
    public static void main(String[] args) {
        Table T = new Table();
        T.disTable();
	System.out.println();
    }
}

class Table {
    private static Scanner in = new Scanner(System.in);
    int i, n1, n2;

    Table() {
        System.out.print("Enter the starting number ");
        n1 = in.nextInt();
        System.out.print("Enter the ending number ");
        n2 = in.nextInt();
    }

    void disTable() {
        for (i = 1; i <= 10; i++) {
            for (int j = n1; j <= n2; j++) {
                System.out.print("\t"+j + " * " + i + " = " + i * j);
            }
            System.out.println();
        }
    }
}
