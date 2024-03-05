#include<stdio.h>

void DisplayI() //I Iteration
{
    int iCnt = 1; 
    
    while(iCnt <= 5)  //joparent
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    DisplayI();
    
    return 0;
}