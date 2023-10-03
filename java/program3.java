import java.util.*;
import java.util.Scanner;
class main
{
    public static void main(String arg[])
    {
       Scanner sc=new Scanner (System.in);
       System.out.println("Enter your name=");
       int No1=sc.nextInt();

      if  (No1%2==0)
      {
        System.out.println("This value is even"+No1);
      }
       else
     {
         System.out.println("This value is odd "+No1);
     }
    }
}