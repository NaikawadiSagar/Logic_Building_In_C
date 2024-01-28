#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    for(int i = 0;i < iLength;i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;

        }
    }
    return 0;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;
    BOOL bRet = FALSE;

    printf("\n Enter Number Of Elements => ");
    scanf("%d",&iSize);

    printf("\n Enter The Searching Number => ");
    scanf("%d",&iValue);

    P = (int *)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable To Allocated memory!!!");
        return -1;
    }

    printf("\n Enter %d Elements => ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Element %d : ",iCnt + 1);
        scanf("%d",&P[iCnt]);
    }
    bRet = Check(P,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("\n Number is Present");
    }
    else
    {
        printf("\n Number is Absent");
    }

    free(P);
    getch();
    return 0;
}


