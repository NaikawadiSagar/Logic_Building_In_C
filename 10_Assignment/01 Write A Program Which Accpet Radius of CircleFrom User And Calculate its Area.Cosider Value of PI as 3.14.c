#include<stdio.h>
#include<conio.h>

double CircleArea(float fRadius)
{
    float Pi = 3.14,Area = 0.0;

    return Area = 3.14 * fRadius * fRadius;

}

int main()
{
    float fValue =  0.0;
    double dRet = 0.0;

    printf("\n Enter A Radius => ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\n Area of Circle is => %lf",dRet);

    getch();
    return 0;
}
