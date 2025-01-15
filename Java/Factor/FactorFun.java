import java.util.Scanner;

class FactorFun {
        public static void main(String[] args) {
                number X = new number();
                X.factor();
        }
}

class number {
        int n,j;
        private static Scanner in = new Scanner(System.in);
        number() {
                System.out.print("Enter The value of a number: ");
                n=in.nextInt();
        }

        void factor() {
                System.out.print("\n\tFactors for "+n+" are ");
                for(j=2;n>1;j++) {
                        for(;n%j==0;n=n/j)
                                System.out.print(" "+j);
                }
                System.out.println();
        }
}
