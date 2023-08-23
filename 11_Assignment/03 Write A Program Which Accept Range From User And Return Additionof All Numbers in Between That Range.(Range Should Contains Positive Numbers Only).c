#include<stdio.h>
#include<conio.h>

int RangeSum(int iStrat,int iEnd)
{
    int i = 0,Ans = 0;

    if(iStrat <= 0 || iStrat >= iEnd)
    {
        printf("\n Invalid Input!!");
        iStrat = iEnd = 0;
    }

    for(i = iStrat ; i <= iEnd; i++)
    {
        Ans = Ans + i;
    }
    return Ans;
}

int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("\n Enter Starting Point => ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point => ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet > 0)
    {
        printf("\n Addition is %d",iRet);
    }
    getch();
    return 0;
}
