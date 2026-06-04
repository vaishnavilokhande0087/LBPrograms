#include<stdio.h>
int KMtoMeter(int iNo)
{
int iKmToMeter = 1000  * iNo;
return iKmToMeter;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("The value is meter is %d",iRet);
return 0;
}