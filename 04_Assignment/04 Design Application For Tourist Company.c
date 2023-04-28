#include<stdio.h>
#include<conio.h>

int TouristBill(int iKilometer)
{
    if(iKilometer < 100)
    {
        return iKilometer * 25;
    }

    else if(iKilometer > 100)
    {
        return (iKilometer * 15) + 1000;
    }

}
int main()
{
    int Kilometer = 0,Bill = 0;

    printf("\n Enter A Kilometer => ");
    scanf("%d",&Kilometer);

    Bill = TouristBill(Kilometer);

    printf("\n\t Your Kilometer is => %d \n Your Bill is => %d",Kilometer,Bill);

    getch();
    return 0;
}
