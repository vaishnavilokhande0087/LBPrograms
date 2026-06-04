#include<stdio.h>
int CountFour(int iNo)
{
    
    int iCntFour = 0;
    int iDigit = 0;

while(iNo > 0)
{
iDigit = iNo % 10;
    if (iDigit == 4)
    { 
        iCntFour++;
    }
iNo /= 10   ; 
}
return iCntFour;

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = CountFour(iValue);
printf("%d",iRet);
return 0;
}