#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    for(int i = 0; i < iLength;i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf("\n %d Is Divisible By 5 ",Arr[i]);
        }
    }
    return;

}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&iSize);

    P = (int * ) malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("\n Enter %d Elements ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Element %d : ",iCnt + 1);
        scanf("%d",&P[iCnt]);
    }

    Display(P,iSize);
    free(P);
    getch();
    return 0;
}
