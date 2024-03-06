#include<stdio.h>
#include<conio.h>


float CalculateBill(int Amount)
{
    if(Amount < 500)
    {
        printf("\n No Discount");
    }

    else if(Amount < 1500 && Amount > 500)
    {
        return Amount - (Amount * 10)/100;
    }
    else if(Amount > 1500)
    {
        return Amount - (Amount * 15)/100;
    }
}

int main()
{
    int Num = 0;
    float Dis = 0.0;

    printf("\n Enter The Amount => ");
    scanf("%d",&Num);

    Dis = CalculateBill(Num);

    printf("\n Total Amount is %d \n Discount is = %0.2f",Num,Dis);

    getch();
    return 0;


}
