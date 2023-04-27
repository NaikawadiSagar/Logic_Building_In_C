#include<stdio.h>
#include<conio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -(iNo);
    }

    for(i = 1;iNo > i;i++)
    {
        if(iNo % i == 0)
        {
            printf("%5d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    getch();
    return 0;
}
