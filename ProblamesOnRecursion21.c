#include<stdio.h>

void DisplayR(int iNo) //R Recursion
{
    if(iNo >= 1)  //joparent
    {
        iNo--;
        DisplayR(iNo); 
        printf("%d\n",iNo); //head recurssion
    }
}

int main()
{
    DisplayR(5);
    
    return 0;
}