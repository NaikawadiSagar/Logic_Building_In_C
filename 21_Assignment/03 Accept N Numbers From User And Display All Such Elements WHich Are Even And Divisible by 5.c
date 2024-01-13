#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    for(int i = 0;i < iLength; i++)
    {
        printf("\n Elemnts is %d",Arr[i]);
    }
    for(int i = 0;i < iLength; i++)
    {
        if(Arr[i] % 2 == 0 && Arr[i] % 5 == 0)
        {
            printf("\n %d is Even And Divisible By 5",Arr[i]);
        }
    }
    return;
}
int main()
{
    int iCnt = 0,iSize = 0;
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
    Display(P,iSize);
    free(P);

    getch();
    return 0;

}
