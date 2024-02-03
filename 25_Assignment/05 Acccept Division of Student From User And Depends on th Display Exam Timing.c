#include<stdio.h>
#include<conio.h>



void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("\n Your Exam At 7 AM");
    }
    else if(ch == 'B'|| ch == 'b')
    {
        printf("\n Your Exam At 8.30 AM");
    }
    else if( ch == 'C'|| ch == 'c')
    {
        printf("\n Your Exam At 9.20 AM");
    }
    else if(ch == 'D'|| ch == 'd')
    {
        printf("\n Your Exam At 10.30 AM");
    }

return;
}
int main()
{
    char cValue = '\0';

    printf("\n Enter Your Division => ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    getch();
    return 0;
}


