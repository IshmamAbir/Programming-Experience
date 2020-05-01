import java.util.Scanner;

public class ContestB {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long min=0,max=0,sum=0,total=0;
        long[] arr=new long[5];
        long[] arr2=new long[5];

        for (int i=0;i<5;i++){
            arr[i] = sc.nextInt();
        }

        for (int i=0;i<5;i++){
            sum +=arr[i];
        }

        for (int i=0;i<5;i++){
            total=sum-arr[i];
            arr2[i] = total;
        }


        for (int i=0;i<5;i++){
            if (arr2[i]>max)
            {
                max= arr2[i];
            }
        }

        for (int i=0;i<4;i++){
            if (arr2[i]<arr2[i+1])
            {
                min= arr2[i];
            }
            else
                min=arr2[i+1];
        }

        System.out.println(min+" "+max);


    }
}
