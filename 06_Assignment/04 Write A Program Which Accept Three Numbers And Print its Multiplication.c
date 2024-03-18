#include<stdio.h>
#include<conio.h>

int Multiply(int iNum1,int iNum2,int iNum3)
{
    if(iNum1 == 0)
    {
        return iNum2 * iNum3;
    }
    else if(iNum2 == 0 && iNum3 == 0)
    {
        return iNum1;
    }

    else if(iNum2 == 0)
    {
        return iNum1 * iNum3;
    }
    else if(iNum3 == 0)
    {
        return iNum1 * iNum2;
    }

    else if(iNum1 == 0 && iNum2 == 0 && iNum3 == 0)
    {
        return 0;
    }
    else
    {
        return iNum1 * iNum2 * iNum3;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("\n Enter Three Numbers => ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("\n Multiplication is %d",iRet);

    getch();
    return 0;

}
