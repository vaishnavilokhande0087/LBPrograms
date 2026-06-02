#include<stdio.h>
int FactorialDiff(int iNo)
{
int iCnt = 0;
int iEvenFactorial  = 1;
int iOddFactorial = 1;
if(iNo < 0)
{
    iNo = -iNo;
}
for(iCnt = 1; iCnt <= iNo ;iCnt++)
{
    if(iCnt % 2 == 0)
    {
        iEvenFactorial = iEvenFactorial * iCnt;
    }
    else
    {
        iOddFactorial = iOddFactorial * iCnt;
    }
}
return iEvenFactorial - iOddFactorial;


}
int main()
{
int iValue = 0,iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactorialDiff(iValue);
printf("Factorial difference is %d",iRet);
return 0;
}
//Time Complexity = O(N*N)