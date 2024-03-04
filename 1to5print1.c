#include<stdio.h>
//problame Statement: Display 1to n numbers on screen.
void Display()
{
    int iCnt =0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Hello %d\n",iCnt);
    }
}

int main()
{

    Display();
    return 0;
}