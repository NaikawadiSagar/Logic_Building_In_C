#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
        int Cnt = -1;
    for(int i = 0;i < iLength;i++)
    {
        if(Arr[i] == iNo)
        {
            Cnt = i;
            break;

        }
    }

    return Cnt;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

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
    iRet = FirstOcc(P,iSize,iValue);

    if(iRet == -1)
    {
        printf("\n There is No Such Number");
    }
    else
    {
        printf("\n First Occurrence Of Number is %d",iRet);
    }

    free(P);
    getch();
    return 0;
}



