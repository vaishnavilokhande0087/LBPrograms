#include<stdio.h>
double CircleArea(float fRadius)
{
double iCircleArea;
iCircleArea = 3.14 * fRadius * fRadius;
return iCircleArea;
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter radius");
scanf("%f",&fValue);
dRet = CircleArea(fValue);
printf("The Area of Circle is %lf\n",dRet);
return 0;
}
//Time COmplexit : O(1)