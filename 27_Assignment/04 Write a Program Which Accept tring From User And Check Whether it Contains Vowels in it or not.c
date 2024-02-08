#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;
BOOL ChkVowel(char *str)
{
    if(*str == '\0')
    {
        return -1;
    }
    else
    {

        while(*str != '\0')
        {
            if((*str == 'a') || (*str == 'e') ||(*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
            {
                return TRUE;
            }
            str++;
        }
        return 0;
    }
}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter A String => ");
    scanf("%[^'\n']s",&Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("\n Contains Vowel");
    }
    else
    {
        printf("\n There is No Vowel ");
    }
    getch();
    return 0;
}


