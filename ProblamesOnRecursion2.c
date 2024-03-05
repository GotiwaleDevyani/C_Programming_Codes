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
    static int iCnt = 1;
    
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
    
    printf("End of Application\n");
    return 0;
}

//1 : Memory for local variables
//2 : Input parameters
//3 : Address of Next Instruction NI
//4 : Value of old EBP  //ESP