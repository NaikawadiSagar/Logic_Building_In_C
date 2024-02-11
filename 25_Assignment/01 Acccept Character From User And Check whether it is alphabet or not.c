#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Character");
    }
    else
    {
        printf("\n It is Not a Character");
    }
    return 0;
}
