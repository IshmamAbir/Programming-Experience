public class StarPrint {
    public static void main(String[] args) {
        for (int i=1;i<=4;i=i*2)
        {
            for (int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }

        for (int i=2;i>=1;i--)
        {
            for (int j=1;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }

    }
}
