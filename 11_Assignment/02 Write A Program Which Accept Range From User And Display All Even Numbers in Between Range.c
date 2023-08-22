#include<stdio.h>
#include<conio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int i = 0;

    if(iStart >= iEnd)
    {
        printf("\n Invalid Range");
    }

    for(i = iStart; i <= iEnd;i++)
    {
        if(i % 2 == 0)
        {
            printf("%3d",i);
        }
    }
    return;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\n Enter Starting Point => ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point => ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    getch();
    return 0;
}
