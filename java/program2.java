import java.util.*;
import java.util.Scanner;
class main
{
    public static void main(String arg[])
    {
       Scanner sc=new Scanner (System.in);
       System.out.println("Enter your name=");
       int No1=sc.nextInt();
       int Ans=No1*No1*No1;
       System.out.println("cube="+Ans);
    }
}