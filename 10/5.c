#include<stdio.h>
double SquareMeter(int iValue)
{
double dSquareMeter = 1;
dSquareMeter = 0.0929 * iValue;
return dSquareMeter;
}
int main()
{
int iValue = 0;
double dRet = 0.0;
printf("Enter area in square feet");
scanf("%d",&iValue);
dRet = SquareMeter(iValue);
printf("Area in Squaremeter is %lf",dRet);
return 0;
}