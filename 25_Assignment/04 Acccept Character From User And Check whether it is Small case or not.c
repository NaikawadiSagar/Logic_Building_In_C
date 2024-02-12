#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 97 && ch <= 122)
        return TRUE;

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter a Character => ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Small Case Character");
    }
    else
    {
        printf("\n It is Not Small Case Character ");
    }
    return 0;
}

