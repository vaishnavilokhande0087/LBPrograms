#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
int iSum = 0;

if(iStart < 0 || iEnd < 0 || iStart > iEnd)
{
return -1;
}

for(iStart ; iStart <= iEnd ; iStart++)
{
    iSum += iStart;
}
return iSum;
}
int main()
{
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d",iRet);
    }
return 0;
}