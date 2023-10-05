#include<stdio.h>
#include<conio.h>

int CountRange(int iNo)
{
    int Dig = 0,RCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig > 3 && Dig < 7)
        {
            RCnt++;
        }

        iNo /= 10;
    }
    return RCnt;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number => ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
