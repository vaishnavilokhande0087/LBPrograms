#include<stdio.h>
double FhtoCs(float fTemp)
{
double dFtoC = 1;
dFtoC = ((fTemp -32) * (5.0/9.0));
return dFtoC;
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter temperature in Fahrenheit");
scanf("%f",&fValue);
dRet = FhtoCs(fValue);
printf("Temperatur in Celsius %lf",dRet);
return 0;
}