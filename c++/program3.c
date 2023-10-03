#include<stdio.h>
#include<stdbool.h>

bool EvenOdd(int nValue)
{

if((nValue%2)==0)
{
    return true;
}
else
{
    return false;
}

}

int main()
{
    int No1=0;
    bool Ans=false;

    printf("Enter Number=");
    scanf("%d",&No1);

    Ans=EvenOdd(No1);
   if(Ans==true)
   {
    printf("%d is an number Even number");
   }
   else
   {
    printf("%d is number an odd number");
   }
   return 0;
}

