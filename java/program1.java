import java.util.*;

float CalculateArea(float fvalue)
{

float fAns=0.0f;
float PI=3.14f;
fAns=PI*fvalue*fvalue;
}
class main
{
public static void main(String args[])
{
    float fRadius = 0.0f;
    float fArea =0.0f;
    Scanner sc=new Scanner(System.in);
System.out.println("Enter radius number:");
    float fRadius=sc.nextFloat();
    fArea = CalculateArea(fRadius);

    System.out.println("Area of circle is :" +fArea);
}
}