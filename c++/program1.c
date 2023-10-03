#include<stdio.h>

float CalculateArea(float fvalue)
{

auto float fAns=0.0f;
auto float PI=3.14f;
fAns=PI*fvalue*fvalue;
return fAns;
}
int main()
{
    auto float fRadius = 0.0f;
    auto float fArea =0.0f;

    printf ("Enter radius number:");
    scanf("%f",&fRadius);
    fArea = CalculateArea(fRadius);

    printf("Area of circle is :%f\n",fArea);
    return 0;
}
