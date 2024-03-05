#include<stdio.h>

int EvenCountR(int Arr[], int iSize) //R Recursion
{
   static int iCnt = 0;
   static int iEven = 0;

   if(iCnt < iSize)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
            EvenCountR(Arr,iSize);
        }
     iCnt++;
   }
   return iEven;
}

int main()
{
    int Arr[5] = {11,20,31,40,51};
    int iRet = 0;


    iRet = EvenCountR(Arr,5);
    printf("Even Count is : %d\n",iRet);
    
    return 0;
}