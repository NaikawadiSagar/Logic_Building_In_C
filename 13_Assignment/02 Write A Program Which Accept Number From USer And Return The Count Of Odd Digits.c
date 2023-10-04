#include<stdio.h>
#include<conio.h>

int CountOdd(int iNo)
{
   int Dig = 0,Ocnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig % 2 != 0)
        {
            Ocnt++;
        }

        iNo /= 10;
    }
    return Ocnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number => ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
