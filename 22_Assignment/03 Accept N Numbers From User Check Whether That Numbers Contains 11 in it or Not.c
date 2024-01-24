#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    for(int i = 0; i< iLength;i++)
    {
        if(Arr[i] == 11)
        {
           return TRUE;
           break;
        }
    }
    return 0;
}
int main()
{
    int iCnt = 0,iSize = 0;
    int *P = NULL;
    BOOL bRet =  FALSE;

    printf("\n Enter Size Of Elements => ");
    scanf("%d",&iSize);

    P = (int *)malloc(iSize * sizeof(int));

    printf("\n Enter %d Elements = ",iSize);

    if(P == NULL)
    {
        printf("\n Unable To Allocated Memory");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Elements %d : ",iCnt + 1);
        scanf("%d",&P[iCnt]);
    }
    bRet = Check(P,iSize);

    if(bRet == TRUE)
    {
        printf("\n 11 is Present");
    }
    else
    {
        printf("\n 11 is Absent");
    }
    free(P);

    getch();
    return 0;

}



