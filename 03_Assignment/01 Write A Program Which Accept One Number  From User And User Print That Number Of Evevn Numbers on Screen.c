#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        return 0;
    }

    while(iNo > 0 )
    {
        i = i + 2;

        printf(" %d",i);
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    getch();
    return 0;
}
