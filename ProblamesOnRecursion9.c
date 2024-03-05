#include<stdio.h>


void Factors(int iNo) //I Iteration
{
    int iCnt = 1; 
    
    for(iCnt =1; iCnt <= (iNo/2);iCnt++)  //joparent
    {
        if((iNo % iCnt) == 0)
        {
          printf("%d\n",iCnt);
        }
    }
}

int main()
{
   int iValue = 0;

   printf("Enter the numbers : \n");
   scanf("%d",&iValue);

   Factors(iValue);
    
    return 0;
}