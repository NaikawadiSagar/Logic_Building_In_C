#include<stdio.h>
#include<conio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);

    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("\n Enter Any Character => ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    getch();
    return 0;
}
