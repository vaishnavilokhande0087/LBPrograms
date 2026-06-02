#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
int iRectArea = 0;
iRectArea = fWidth * fHeight;
return iRectArea;

}
int main()
{
float fValue1 = 0.0, fValue2 = 0.0;
double dRet = 0.0;
printf("Enter width");
scanf("%f",&fValue1);
printf("Enter height");
scanf("%f",&fValue2);
dRet = RectArea(fValue1, fValue2);
printf("Area of Rectangle is  : %lf \n",dRet);
return 0;
}


//Time COmplexity : O(1)