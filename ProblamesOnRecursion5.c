#include<stdio.h>

void DisplayR() //R Recursion
{
    static int  iCnt = 1; 
    
    if(iCnt <= 5)  //joparent
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    
    return 0;
}