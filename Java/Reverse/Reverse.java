import java.util.Scanner;

public class Reverse {
        public static void main(String[] args){
                numberRev R = new numberRev();
                R.rev();
        }
}

class numberRev {
        private static Scanner in = new Scanner(System.in);
        int n, r;
        numberRev() {
                System.out.print("Enter the number ");
                n = in.nextInt();
        }
        void rev() {
                for (r = 0; n>0; n/=10) {
                        r = (r*10)+n%10;
                }
                System.out.println("Reverse number is " + r);
        }
}
