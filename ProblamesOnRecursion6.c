#include<stdio.h>


void DisplayI() //I Iteration
{
    int iCnt = 1; 
    
    while(iCnt <= 5)  //joparent
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
void DisplayR() //R Recursion
{
    static int iCnt = 1; 
    
    if(iCnt <= 5)  //joparent
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR();
    }
}



int main()
{
    DisplayR();
    
    return 0;
}