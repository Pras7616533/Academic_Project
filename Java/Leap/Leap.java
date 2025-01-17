import java.io.DataInputStream;

public class Leap {
        static DataInputStream in = new DataInputStream(System.in);
        public static void main(String[] args) {
                try{
                        String r;
                        System.out.print("Enter the year ");
                        int y = Integer.parseInt(in.readLine());
                        if((y%4==0&&y%100!=0)||y%400==0) {
                                r = " is a leap year";
                        } else {
                                r = " is not a leap year";
                        }
                        System.out.println("The year "+y+r);
                } catch(Exception e) {}
        }
}
