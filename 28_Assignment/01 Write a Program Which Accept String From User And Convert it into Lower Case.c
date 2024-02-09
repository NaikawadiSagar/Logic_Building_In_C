#include<stdio.h>
#include<conio.h>

void strlwrx(char *str)
{
    if(*str == NULL)
    {
        return -1;
    }
    else
    {
        while(*str != '\0')
        {
             if(*str >= 'A' && *str <= 'Z')
            {
                *str = *str + 32;
            }
        str++;
        }
    }
}

int main()
{
    char Arr[20];

    printf("\n Enter The String => ");
    scanf("%[^\n]s",&Arr);

    strlwrx(Arr);

    printf("\n Modified String is %s",Arr);
    getch();
    return 0;
}
