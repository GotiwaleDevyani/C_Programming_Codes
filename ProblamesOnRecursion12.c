#include<stdio.h>


int SumFactors(int iNo) 
{
    int iCnt = 1, iSum = 0; 
    
    if(iCnt <= (iNo/2))  //joparent
    {
        if((iNo % iCnt) == 0)
        {
          iSum = iSum + iCnt;
        }
        iCnt++;
    }
    return iSum;
}

int main()
{
   int iValue = 0, iRet = 0;

   printf("Enter the numbers : \n");
   scanf("%d",&iValue);

   iRet = SumFactors(iValue);
   printf("Addition of factors is : %d\n",iRet);

  
    
    return 0;
}