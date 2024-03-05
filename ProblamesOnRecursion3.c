#include<stdio.h>

void DisplayI() //I Iteration
{
    int iCnt = 1; 
    
    while(iCnt <= 4)  //joparent
    {
        printf("Jay Ganesh..\n");
        iCnt++;
    }
}

void DisplayR() //R Recursive
{
    int iCnt = 1;
    
    if(iCnt <= 4)   //jar
    {
        printf("Jay Ganesh..\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    
    return 0;
}