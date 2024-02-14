#include<stdio.h>
#include<conio.h>

int Difference(char *str)
{
    int E_Cnt = 0,O_Cnt;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            E_Cnt++;
        }
       else if(*str >= 'a' && *str <= 'z')
        {
            O_Cnt++;
        }
        str++;
    }

    return O_Cnt - E_Cnt;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter A String => ");
    scanf("%[^'\n']s",&Arr);

    iRet = Difference(Arr);
    printf("%d",iRet);

    getch();
    return 0;
}

