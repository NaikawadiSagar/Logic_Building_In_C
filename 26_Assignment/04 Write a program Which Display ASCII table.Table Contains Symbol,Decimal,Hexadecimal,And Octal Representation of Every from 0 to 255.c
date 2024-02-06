#include<stdio.h>
#include<conio.h>

void DisplayASCII()
{
    int iNo = 0;
    printf("Decimal Hexadecimal Octal Symbol\n");
    for(iNo = 0;iNo<=255;iNo++)
    {
        printf(" %3d %9x %8o %6c \n",iNo,iNo,iNo,iNo);
    }
}
int main()
{
    DisplayASCII();
    getch();
    return 0;
}
