package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        System.out.println("Input your number");
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int count=0;


        while (n>1)
        {
            if (n==2)
            {
                System.out.println("Prime number");
            }
            else
                {
                    for (int i=2;i<n;i++)
                    {
                        if (n%i==0)
                        {
                            count++;

                        }

                    }
                }
        }
    }
}
