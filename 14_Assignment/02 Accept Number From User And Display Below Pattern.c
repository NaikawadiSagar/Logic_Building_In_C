#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i>= 1; i--)
    {
        printf("%d",i);
        printf(" # ");
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return;
}
