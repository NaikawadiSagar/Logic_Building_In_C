#include<stdio.h>
#include<conio.h>

int SumNonFact(int iNo)
{
    int i = 0,Sum = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number => ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
