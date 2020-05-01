import java.util.Scanner;

public class SubeenPractise {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int take =sc.nextInt();
        if (take > 0 && take <=100){
        while (take>0  )
        {
            int num=sc.nextInt();

            if (num%2==0)
                System.out.println("EVEN");
            else
                System.out.println("ODD");
            take-- ;
        }
        }




    }
}
