#include<stdio.h>
#include<conio.h>

void struprx(char *str)
{
    if(*str == NULL)
    {
        return -1;
    }
    else
    {
        while(*str != '\0')
        {
             if(*str >= 'a' && *str <= 'z')
            {
                *str = *str - 32;
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

    struprx(Arr);

    printf("\n Modified String is %s",Arr);
    getch();
    return 0;
}

