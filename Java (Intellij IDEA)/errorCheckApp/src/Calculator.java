import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Input first number: ");
        double first = sc.nextDouble();
        System.out.print("Input operator: ");
        char operator=sc.next().charAt(0);
        System.out.print("Input last number: ");
        double last = sc.nextDouble();
        System.out.print("The result is "+first+""+operator+""+last+"=");


        switch (operator)
        {
            case '+' :
                System.out.println(first+last);
                break;
            case '-' :
                System.out.println(first-last);
                break;
            case '*' :
                System.out.println(first*last);
                break;
            case '/' :
                System.out.println(first/last);
                break;
            default:
                System.out.println("Incorrect operator");
        }
       /* if (operator == '+')
            System.out.println(first+last);
        else if (operator == '-')
            System.out.println(first-last);
        else if (operator == '*')
            System.out.println(first*last);
        else if (operator == '/')
            System.out.println((first*1.0)/last);
        else
            System.out.println("Incorrect Operator");
*/

    }
}
