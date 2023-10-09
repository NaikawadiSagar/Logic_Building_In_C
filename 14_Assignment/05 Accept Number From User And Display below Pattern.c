#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= 8; i++)
    {
        printf("%3d",i * iNo);
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number of Elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
