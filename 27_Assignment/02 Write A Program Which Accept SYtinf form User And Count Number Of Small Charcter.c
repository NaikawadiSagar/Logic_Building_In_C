#include<stdio.h>
#include<conio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter A String => ");
    scanf("%[^'\n']s",&Arr);

    iRet = CountSmall(Arr);
    printf("%d",iRet);

    getch();
    return 0;
}

