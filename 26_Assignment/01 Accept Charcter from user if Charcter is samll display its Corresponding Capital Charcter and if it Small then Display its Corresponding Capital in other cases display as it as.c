#include<stdio.h>
#include<conio.h>

void Display(char Ch)
{
    if(Ch >= 'A' && Ch <= 'Z')
    {
        printf("%c", (Ch + 32));
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        printf("%c" ,(Ch - 32));
    }
    else
    {
        printf("%c" ,Ch);
    }
}

int main()
{
    char cValue = '\0';
    printf("\n Enter The Character = ");
    scanf("%c",&cValue);
    Display(cValue);

    getch();
    return 0;
}
