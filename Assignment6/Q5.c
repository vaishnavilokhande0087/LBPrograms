#include<stdio.h>
void TableRev(int iNo)
{
int iCnt = 0;
int iMult = 0;
if(iNo < 0)
{
    iNo = -iNo;
}
for(iCnt =10;iCnt>0; iCnt--)
{
    iMult = iNo * iCnt;
    printf("%d\t",iMult);
}
}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
TableRev(iValue);
return 0;
}
//Time Complexity : O(n)
