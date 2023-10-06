#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    char Ch = 'A';
    int i = 0;

    for(i = 1;i <= iNo; i++)
    {
        printf(" %3c",Ch);
        Ch++;
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter Number Of Element => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
