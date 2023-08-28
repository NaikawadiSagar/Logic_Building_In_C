#include<stdio.h>
#include<conio.h>

void DisplayDigit(int iNo)
{
    int Dig = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        Dig =  iNo % 10;

        printf("%d",Dig);

       iNo = iNo / 10;

    }
    return;
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    getch();
    return 0;
}
