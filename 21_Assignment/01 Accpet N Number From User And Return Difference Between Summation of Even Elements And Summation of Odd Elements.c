#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int E_Sum = 0,O_Sum = 0;
    for(int i = 0; i< iLength;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            E_Sum = E_Sum + Arr[i];
        }
        else
        {
            O_Sum = O_Sum + Arr[i];
        }
    }
    return E_Sum - O_Sum;
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
        printf("Unable To Allocate memory");
        return -1;
    }

   /// printf("Enter %d Elements",iLength);

    for(iCnt = 0; iCnt< iSize;iCnt++)
    {
        printf("Enter Element :%d => ",iCnt + 1);
        scanf("%d",&P[iCnt]);
    }
    iRet = Difference(P,iSize);
    printf("Result is %d  = ",iRet);
    free(P);
    return 0;
}
