#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOl;

BOOl ChkZero(int iNo)
{
    int Dig = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig = iNo % 10;

        if(Dig == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

        iNo /= iNo;
    }
    return;
}

int main()
{
    int iValue = 0;
    BOOl bRet = FALSE;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\n It Contains Zero ");
    }
    else
    {
        printf("\n There is No Zero ");
    }

    getch();
    return 0;
}
