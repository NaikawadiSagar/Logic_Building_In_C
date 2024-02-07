#include<stdio.h>
#include<conio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);
    printf("%d",iRet);

    getch();
    return 0;
}
