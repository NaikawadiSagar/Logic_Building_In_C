#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNum)
{
    if(iNum > 100)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("\n Please Enter Number => ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == 1)
    {
        printf("\n Number Is Greater");
    }

    else
    {
        printf("\n Number Is Smaller ");
    }

    getch();
    return 0;
}
