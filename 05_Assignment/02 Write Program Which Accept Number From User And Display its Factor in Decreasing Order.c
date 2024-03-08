#include<stdio.h>
#include<conio.h>

void MultFact(int iNo)
{
    int i = 0;

    for(i = iNo - 1; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf(" %d",i);
        }
    }
    return;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter The Number => ");
    scanf("%d",&iValue);

    MultFact(iValue);

    getch();
    return 0;
}
