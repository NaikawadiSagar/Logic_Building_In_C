#include<stdio.h>
#include<conio.h>

int FactorialDiff(int iNo)
{
    int OFact = 1,EFact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 == 0)
        {
            OFact = OFact * iNo;
        }
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\n Factorial Difference is = %d",iRet);

    getch();
    return 0;
}
