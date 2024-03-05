#include<stdio.h>


int FactorialR(int iNo) 
{
    static int iCnt = 1;
    static int iFact = 1;

   if(iCnt <= iNo)
   {
     iFact = iFact * iCnt;
     iCnt++; 
   }
    return iFact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the numbers : \n");
   scanf("%d", &iValue);
    
   iRet = FactorialR(iValue);
   printf("Factorial of numbers : %d\n",iRet);
   return 0;
}