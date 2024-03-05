#include<stdio.h>


void DisplayI(int iNo) //I Iteration
{
    int iCnt = 1; 
    
    while(iCnt <= iNo)  //joparent
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    DisplayI(4);
    
    return 0;
}