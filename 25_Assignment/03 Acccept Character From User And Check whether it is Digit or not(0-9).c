#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 48 && ch <= 57)
        return TRUE;

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter The Character => ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("\n It is Digit");
    }
    else
    {
        printf("\n It is Not a Digit");
    }
    return 0;
}

