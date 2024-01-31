#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Sum(int Arr[],int iLength)
{
    int Sum = 0,Cnt = 0;
    for(int i = 0; i < iLength; i++)
    {
        Cnt = 0;
        int Temp = Arr[i];
        while(Temp > 0)
        {
            Cnt++;
            Temp = Temp / 10;
        }
        if(Cnt == 3)
        {
            printf("%d ",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&iSize);

    P = (int *)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable To Allocated memory!!!");
        return -1;
    }

    printf("\n Enter %d Elements => ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n Enter Element %d : ",iCnt + 1);
        scanf("%d",&P[iCnt]);
    }
    Sum(P,iSize);


    free(P);
    getch();
    return 0;
}






