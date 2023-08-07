#include<stdio.h>
#include<conio.h>

void Display(iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    switch(iNo)
    {
        case 0:
                printf("\n ZERO");
                break;

        case 1:
                printf("\n ONE");
                break;

        case 2:
                printf("\n TWO");
                break;

        case 3:
                printf("\n THREE");
                break;

        case 4:
                printf("\n FOUR ");
                break;

        case 5:
                printf("\n FIVE");
                break;

        case 6:
                printf("\n SIX");
                break;

        case 7:
                printf("\n SEVEN");
                break;

        case 8:
                printf("\n EIGHT");
                break;

        case 9:
                printf("\n NINE");
                break;

        default:
                printf("\n Invalid Number");
                break;
    }
}

int main()
{
    int iValue = 0;

    printf("\n Enter A Number => ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
