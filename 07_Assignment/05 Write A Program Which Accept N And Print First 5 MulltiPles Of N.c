#include<stdio.h>
#include<conio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i<= 5; i++)
    {
        printf("%4d",iNo * i);
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
