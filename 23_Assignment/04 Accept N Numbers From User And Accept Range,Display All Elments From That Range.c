#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] >= iStart && Arr[i]<=iEnd)
        {
            printf(" %d ",Arr[i]);

        }
    }
    return;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *P = NULL;
    printf("\n Enter Number Of Elements => ");
    scanf("%d",&iSize);

    printf("\n Enter The Starting Number  => ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Number = >");
    scanf("%d",&iValue2);

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
    Range(P,iSize,iValue1,iValue2);

    free(P);
    getch();
    return 0;
}




