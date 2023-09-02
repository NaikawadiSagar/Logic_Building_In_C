#include<stdio.h>
#include<conio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int i = 0,Ans = 0;

    if(iStart <= 0 || iStart >= iEnd)
    {
        printf("\n Invalid Input!!");
        iStart = iEnd = 0;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            Ans += i;
        }
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

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet > 0)
    {
        printf("\n Addition is %d",iRet);
    }

    getch();
    return 0;
}
