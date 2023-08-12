#include<stdio.h>
#include<conio.h>

int EvenFactorial(int iNo)
{
    int Fact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 == 0)
        {
            Fact = Fact * iNo;
        }
        iNo--;
    }
    return Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\n Even Factorial Of Number is = %d",iRet);

    getch();
    return 0;
}
