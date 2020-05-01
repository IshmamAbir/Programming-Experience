import java.util.Scanner;

public class EvenOddCount {
    public static void main(String[] args) {

        int evenCount=0,oddCount=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Starting Number = ");
        int first = sc.nextInt();
        System.out.print("Enter Ending Number = ");
        int last = sc.nextInt();

        if (first > 0 && last > 0) {
            for (int i = first; i <= last; i++)
            {
                if (i%2==0)
                {
                    evenCount++ ;
                }
                else {
                        oddCount++;
                    }
            }

            System.out.println("Total even number count = " + evenCount);
            System.out.println("Toatl odd number count = "+ oddCount);

            System.out.print("The even numbers between "+first +" and "+last +" are : " );
            for (int i = first; i <= last; i++)
            {
                if (i%2==0)
                {
                    System.out.print(i+" ");
                }
            }


        }
        else
        {
            System.out.println("Negative is not allowed");
        }
    }
}
