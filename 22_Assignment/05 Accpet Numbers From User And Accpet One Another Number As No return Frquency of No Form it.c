#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int No)
{
    int Cnt = 0;
    for(int i = 0; i< iLength; i++)
    {
        if(Arr[i] == No)
        {
            Cnt++;
        }
    }
    return Cnt;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

    printf("\n Enter Size Of Array Element => ");
    scanf("%d",&iSize);

    printf("\n Enter The Searching Number = ");
    scanf("%d",&iValue);

    P = (int *) malloc(iSize * sizeof(int));

    printf("\n Enter %d Elements = ",iSize);

    if(P == NULL)
    {
        printf("\n Unable to Allocated Memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        printf("\n Enter Elements %d = ",iCnt + 1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Frequency(P,iSize,iValue);
    printf("\n %d ",iRet);

    free(P);

    getch();
    return 0;
}

