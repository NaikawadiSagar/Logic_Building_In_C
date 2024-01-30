#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
    int Min = 0;
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] < Min || i == 0)
        {
            Min = Arr[i];
        }
    }
    return Min;
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
    iRet = Maximum(P,iSize);
    printf("\n The Minimum Number is = %d",iRet);

    free(P);
    getch();
    return 0;
}






