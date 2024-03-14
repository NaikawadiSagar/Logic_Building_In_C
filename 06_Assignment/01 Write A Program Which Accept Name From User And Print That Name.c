#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[30];

    printf("\n Please Enter Full Name => ");
    scanf("%[^\n]",&Name);

    printf("\n Your Name is  %s",Name);

    getch();
    return 0;
}
