#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
    int R = 3,C= 3 ;

    for(R = 1; R<= iRow;R++)
    {
        for(C = 1;C <= iCol;C++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\n Enter Number Of Rows And Columns => ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    getch();
    return 0;
}

