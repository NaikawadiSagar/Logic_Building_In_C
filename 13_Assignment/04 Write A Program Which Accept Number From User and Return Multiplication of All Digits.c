#include<stdio.h>
#include<conio.h>

int MulDigits(int iNo)
{
    int Dig = 0,Mul = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        Mul = Mul * Dig;

        iNo/= 10;
    }
    return Mul;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number => ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
