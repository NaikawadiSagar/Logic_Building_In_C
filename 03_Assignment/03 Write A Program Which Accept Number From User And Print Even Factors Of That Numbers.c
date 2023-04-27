#include<stdio.h>
#include<conio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1;iNo > i;i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%4d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    getch();
    return 0;
}
