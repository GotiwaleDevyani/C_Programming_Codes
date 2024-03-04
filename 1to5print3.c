#include<stdio.h>
//problame Statement: Display 1to n numbers using Forward way on screen.
void Display(int iNo)
{
    int iCnt =0;
//       step:1      step:2    step:3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt); //step:4
    }
}

int main()
{
    int iValue = 0;
    printf("Enter how many number You want to display on Screen\n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}