#include<stdio.h>
//problame Statement: Display 1to n numbers on screen.
void Display(int iNo)
{
    int iCnt =0;
//       step:1      step:2    step:3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Hello %d\n",iCnt); //step:4
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number of times You want to display Hello on Screen\n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}