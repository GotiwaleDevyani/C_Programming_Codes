//problame Statement: Accept the one number from user and find the all factors of that number.and return the addition of factors to function.
#include<stdio.h>
#include<stdbool.h>

int DisplaySumFactors(int No1)
{
    int iCnt =0;
    int iSum = 0;

    printf("Factors of %d are :\n",No1);
    //     1         2        3
    for(iCnt =1; iCnt <= (No1/2); iCnt++ ) // time comlexity (/2)
    {
        if((No1 % iCnt) == 0)//4
        {
           iSum = iSum + iCnt;
        }    
    }
    
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);
    
    iRet = DisplaySumFactors(iValue);
    printf("Sum of factors  are : %d\n",iRet);
    
    return 0;
}
//time complexity : 0(N/2)