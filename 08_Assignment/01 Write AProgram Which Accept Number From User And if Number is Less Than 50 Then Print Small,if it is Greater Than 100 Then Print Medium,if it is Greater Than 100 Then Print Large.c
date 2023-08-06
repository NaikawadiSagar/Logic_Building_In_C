#include<stdio.h>
#include<conio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("\n Small");
    }

    else if(iNo > 50 && iNo < 100)
    {
        printf("\n Medium");
    }

    else if(iNo > 100)
    {
        printf("\n Large");
    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    Number(iValue);

    getch();
    return 0;
}
