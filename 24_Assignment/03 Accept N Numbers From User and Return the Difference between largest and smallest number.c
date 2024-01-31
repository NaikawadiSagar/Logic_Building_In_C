#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Differnce(int Arr[],int iLength)
{
    int Min = 0,Max = 0;
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] < Min || i == 0)
        {
            Min = Arr[i];
        }
       else if(Arr[i] > Max)
        {
            Max = Arr[i];
        }

    }
    return Max - Min;
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
    iRet = Differnce(P,iSize);
    printf("\n The Difference Between Maximum And Minimum Number is = %d",iRet);

    free(P);
    getch();
    return 0;
}






