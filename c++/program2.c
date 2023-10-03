#include<Stdio.h>

long int CalculateCube(int nValue)
{

   long int Cube =0;
   Cube=nValue*nValue*nValue;

   return Cube;
}



int main() 
{
  auto int no1=0;
  auto long int Ans=0;

    printf("Enter number to cube=");
    scanf("%d",&no1);

   Ans=CalculateCube(no1);

     printf("Cube is= %d",Ans);

  return 0;
}
