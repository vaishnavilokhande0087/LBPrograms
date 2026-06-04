#include<stdio.h>
double CircleArea(float fRadius)
{
    double iCircleArea = 3.14 * fRadius * fRadius;
    return iCircleArea;
}

int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter radius");
scanf("%f",&fValue);
dRet = CircleArea(fValue);
printf("Area of Circle %lf",dRet);
return 0;
}