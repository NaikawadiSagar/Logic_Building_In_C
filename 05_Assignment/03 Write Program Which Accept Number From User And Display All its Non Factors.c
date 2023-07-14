#include<stdio.h>
#include<conio.h>

void NonFact(int iNo)
{
    int i = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%3d",i);
        }
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number =>");
    scanf("%d",&iValue);

    NonFact(iValue);

    getch();
    return 0;
}
