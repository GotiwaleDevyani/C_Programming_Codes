//problame statement : accept number of rows anf coloums from user and print the Non linear pattern on console.
/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/
#include<stdio.h>

void Display()
{
    int i= 0 , j = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 4; j++)
        {
             printf("*\t");
        }
        printf("\n");  
    }
}

int main()
{
    
    Display();


    return 0;
}