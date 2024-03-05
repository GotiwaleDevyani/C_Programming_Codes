#include<stdio.h>

void DisplayR(int iNo) //R Recursion
{
    if(iNo >= 1)  //joparent
    {
        printf("%d\n",iNo); //tai recurssion
        iNo--;
        DisplayR(iNo); 
    }
}

int main()
{
    DisplayR(5);
    
    return 0;
}