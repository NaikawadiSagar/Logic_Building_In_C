#include<stdio.h>
#include<conio.h>

int SchoolFees(int iStandard)
{
    switch(iStandard)
    {
        case 1:
                return 8900;
                break;

        case 2:
                return 12790;
                break;
        case 3:
                return 21000;
                break;

        case 4:
                return 23450;
                break;

        default:
                printf("\n Wrong Input");
                exit(0);
    }
}

int main()
{
    int Standard = 0,Fees = 0;

    printf("\n Enter The Standard => ");
    scanf("%d",&Standard);

    Fees = SchoolFees(Standard);

    printf("\n\t Standard is =>%d \n Fees Are => %d",Standard,Fees);

    getch();
    return 0;
}
