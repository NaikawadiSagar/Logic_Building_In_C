#include<stdio.h>
#include<conio.h>

int MulFact(int iNo)
{
    int i = 0,Cal = 1;

    for(i = 1;i < iNo;i++)
    {
        if(iNo % i == 0)
        {
            Cal = Cal * i;
        }
    }

    return Cal;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter The Number => ");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("\n %d",iRet);

    getch();
    return 0;
}
