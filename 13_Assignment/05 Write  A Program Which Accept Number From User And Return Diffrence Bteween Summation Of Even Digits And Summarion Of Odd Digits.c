#include<stdio.h>
#include<conio.h>

int CountDiff(int iNo)
{
    int Dig = 0,ESum = 0,OSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig % 2 == 0)
        {
            ESum = ESum + Dig;
        }

        else
        {
            OSum = OSum + Dig;
        }

        iNo /= 10;
    }
    return ESum - OSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number => ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
