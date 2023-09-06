#include<stdio.h>
#include<conio.h>

int Count(int iNo)
{
    int Dig = 0,Cnt = 0;

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig < 6)
        {
            Cnt++;
        }
        iNo/=10;
    }
    return Cnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number => ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
