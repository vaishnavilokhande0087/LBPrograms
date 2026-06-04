#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
    int iSum = 0;
if(iStart < 0 || iEnd < 0 || iStart > iEnd )
{
    printf("Invalid Range");
}
else
{
    for(iStart = iStart ; iStart <= iEnd ; iStart++)
    {
        if(iStart % 2 == 0)
        {
            iSum += iStart;
        }
    }
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
iRet = RangeSumEven(iValue1, iValue2);
printf("Addition is %d",iRet);
return 0;
}