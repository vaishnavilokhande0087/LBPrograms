#include<stdio.h>
int FactDiff(int iNo)
{
int iCnt = 0;
int iFSum = 0;
int iNonFSum = 0;
int iFactDiff = 0;
for(iCnt = 1;iCnt < iNo ; iCnt++)
{
    if(iNo % iCnt == 0)
    {
        iFSum= iFSum + iCnt;
    }
    else
    {
        iNonFSum = iNonFSum + iCnt;
    }

}
iFactDiff = iFSum - iNonFSum;
return iFactDiff;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d",iRet);
return 0;
}