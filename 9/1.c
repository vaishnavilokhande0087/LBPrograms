#include<stdio.h>
int CountEven(int iNo)
{
int iRem = 0;
int iEvenCnt =0;
if(iNo < 0)
{
    iNo = -iNo;
    
}
while(iNo != 0)
{
    iRem= iNo % 10;
    if(iRem % 2 == 0)
    {
        iEvenCnt++;
    }
    iNo = iNo / 10;

}
return iEvenCnt;
}
int main()

{



int iValue = 0;
int iRet = 0;
printf("Enter number :");
scanf("%d",&iValue);
iRet = CountEven(iValue);
printf("%d\n",iRet);
return 0;
}