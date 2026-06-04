#include<stdio.h>
int CountOdd(int iNo)
{
    int iCountOdd = 0;
    while(iNo > 0)
    {
        iNo % 10;
        if(iNo % 2 != 0 )
        {
            iCountOdd++;
        }
        iNo = iNo/10;
    }
    return iCountOdd;

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = CountOdd(iValue);
printf("%d",iRet);
return 0;
}