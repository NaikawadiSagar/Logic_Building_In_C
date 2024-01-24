#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
    int E_Dig = 0,O_Dig = 0;
    for(int i = 0;i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            E_Dig++;
        }
        else if(Arr[i] % 2 != 0)
        {
            O_Dig++;
        }
    }
    return E_Dig - O_Dig;
}
int main()
{
    int iCnt = 0,iSize = 0, iRet = 0;
    int *P = NULL;

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
    iRet = Display(P,iSize);

    printf("\n Difference is  = %d",iRet);
    free(P);

    getch();
    return 0;

}



