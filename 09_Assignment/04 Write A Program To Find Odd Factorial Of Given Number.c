#include<stdio.h>
#include<conio.h>

int OddFactorial(iNo)
{
    int Fact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 != 0)
        {
            Fact = Fact * iNo;
        }
        iNo--;
    }
    return Fact5;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\n Odd Factorial Of Number = %d",iRet);

    getch();
    return 0;
}
