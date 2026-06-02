#include<stdio.h>
int EvenFactorial(int iNo)
{
int iCnt = 0;
int iEvenFact = 1;

if(iNo < 0)
{
    iNo = -iNo;
}

for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
{
    if(iCnt % 2 == 0)
    {
        iEvenFact*=iCnt;
    }
}
return iEvenFact;
}
int main()
{
int iValue = 0,iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = EvenFactorial(iValue);
printf("Even Factorial of number is %d",iRet);
return 0;
}

//Time Complexity : O(n)
