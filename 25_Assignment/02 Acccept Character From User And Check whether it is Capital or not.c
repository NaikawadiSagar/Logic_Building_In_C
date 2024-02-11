#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        return TRUE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter A Character => ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Capital Character");
    }
    else
    {
        printf("\n It is Not a Capital Character");
    }
    return 0;
}

