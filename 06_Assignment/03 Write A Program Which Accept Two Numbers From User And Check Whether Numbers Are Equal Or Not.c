#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkEqual(int iNum1,int iNum2)
{
    if(iNum1 == iNum2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("\n Please Enter Two Numbers => ");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == 1)
    {
        printf("\n Both Numbers Are Equal");
    }
    else
    {
        printf("\n Both Numbers Are Not Equal");
    }

    getch();
    return 0;
}
