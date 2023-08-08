#include<stdio.h>
#include<conio.h>

int Factorial(int iNo)
{
    int Fact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Fact = Fact * iNo;

        iNo--;
    }
    return Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\n Factorial Of Number = %d",iRet);

    getch();
    return 0;
}
