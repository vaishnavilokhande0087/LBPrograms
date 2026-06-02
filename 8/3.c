#include<stdio.h>
int KMtoMeter(int iNo)
{
int iMeter = iNo * 1000;
return iMeter;


}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("The Value in meter is %d",iRet);
return 0;
}

//Time COmplexity : O(1)