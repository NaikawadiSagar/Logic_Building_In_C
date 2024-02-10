#include<stdio.h>
#include<conio.h>

void DisplayDigit(char *str)
{
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        while(*str != '\0')
        {
            if(*str >= '0' && *str <= '9')
            {
                printf("%s",*str);
            }
        str++;
        }
    }
    return 0;
}

int main()
{
    char Arr[20];

    printf("\n Enter The String => ");
    scanf("%[^\n]s",&Arr);

    DisplayDigit(Arr);

   // printf("\n Modified String is %s",Arr);
    getch();
    return 0;
}

