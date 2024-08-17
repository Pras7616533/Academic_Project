/*
   Made by Prashant Deshmukh on 16/08/2024
   Roll no: 2258
*/

import java.util.Scanner;

public class ArrayManagement {
    private static final int MAX = 100;
    private static int num = 0;
    private static int[] a = new int[MAX];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name;
        int ch;

        System.out.print("\n\tEnter your name: ");
        name = sc.nextLine();
        clearScreen();

        System.out.println("\n\t\t\t\t*** Array Management ***");

        while (true) {
            System.out.print("\n\tEnter your choice:\n\t1. Create\n\t2. Insert\n\t3. Delete\n\t4. Display\n\t5. Exit\n\t\t==> ");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    create(sc);
                    System.out.printf("\tArray is created by %s\n", name);
                    break;

                case 2:
                    insert(sc);
                    System.out.printf("\tElement is inserted by %s\n", name);
                    break;

                case 3:
                    delet(sc);
                    System.out.printf("\tElement is deleted by %s\n", name);
                    break;

                case 4:
                    display();
                    break;

                case 5:
                    System.out.printf("\n\tThank you! %s...\n", name);
                    sc.close();
                    System.exit(0);
                    break;

                default:
                    System.out.println("\n\tWrong choice!!");
            }
        }
    }

    private static void create(Scanner sc) {
        System.out.print("\tEnter the value of n: ");
        num = sc.nextInt();
        System.out.printf("\tEnter %d elements: ", num);
        for (int i = 0; i < num; i++) {
            a[i] = sc.nextInt();
        }
    }

    private static void insert(Scanner sc) {
        System.out.print("\tEnter the value to insert: ");
        int ele = sc.nextInt();
        System.out.print("\tEnter index after which element is to be inserted: ");
        int ind = sc.nextInt();

        if (ind >= 0 && ind < num) {
            for (int i = num - 1; i >= ind; i--) {
                a[i + 1] = a[i];
            }
            a[ind] = ele;
            num++;
        } else {
            System.out.println("\tInvalid index!");
        }
    }

    private static void delet(Scanner sc) {
        System.out.print("\tEnter the index of the element to delete: ");
        int ind = sc.nextInt();

        if (ind >= 0 && ind < num) {
            for (int i = ind; i < num - 1; i++) {
                a[i] = a[i + 1];
            }
            num--;
        } else {
            System.out.println("\tInvalid index!");
        }
    }

    private static void display() {
        System.out.println("\n\t\t\t\t***** Elements in Array *****\n\t\t");
        for (int i = 0; i < num; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println("\n");
    }

    private static void clearScreen() {
        // Clearing screen logic for Java, but it may vary based on the environment.
        // Common way to clear the console in a cross-platform manner:
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}
