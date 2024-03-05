#include<stdio.h>
//problame Statement: Accept the number form user to print on screen Jay Ganesh of multipal time.

void Display(int iNo)
{
    int iCnt = 0; //cnt = counter
   
    //    1          2           3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         printf("Jay Ganesh ...\n"); //4
    }
}

int main()
{
   
    Display(8);

    return 0;
}