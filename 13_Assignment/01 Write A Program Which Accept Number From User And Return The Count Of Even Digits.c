#include<stdio.h>
#include<conio.h>

int CountEven(int iNo)
{
    int Dig = 0,Ecnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig % 2 == 0)
        {
            Ecnt++;
        }

        iNo /= 10;
    }
    return Ecnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf(" %d",iRet);

    getch();
    return 0;
}
