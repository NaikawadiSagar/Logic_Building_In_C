#include<stdio.h>
#include<conio.h>

int CountTwo(int iNo)
{
    int Dig = 0,Cnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig == 2)
        {
            Cnt++;
        }

        iNo = iNo / 10;
    }
    return Cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
