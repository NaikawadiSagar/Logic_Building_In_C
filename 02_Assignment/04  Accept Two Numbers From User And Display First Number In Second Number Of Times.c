#include<stdio.h>
#include<conio.h>

void Display(int iNo,int iFrequency)
{
    int icnt = 0;

    for(icnt = 0;icnt < iFrequency;icnt++)
    {
        printf("%5d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("\n Enter The Number => ");
    scanf("%d",&iValue);

    printf("\n Enter A Frequency => ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    getch();
    return 0;
}
