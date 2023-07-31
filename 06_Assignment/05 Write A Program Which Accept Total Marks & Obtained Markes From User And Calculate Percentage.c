#include<stdio.h>
#include<conio.h>

float Percentage(int N1,int N2)
{
    if(N1 < N2 || N1 == 0)
    {
        printf("Invalid Data");
        exit(0);
    }
     return (N2 * 100) / N1;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fret = 0;

    printf("\n Please Enter Total of Marks => ");
    scanf("%d",&iValue1);

    printf("\n Please Enter Obtained Marks => ");
    scanf("%d",&iValue2);

    fret = Percentage(iValue1,iValue2);

    printf("\n Percentage is %f",fret);
}
