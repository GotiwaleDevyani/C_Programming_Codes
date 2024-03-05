//problame Statement: Accept the one number from user and find the number is perfect or not .
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int No1)
{
    int iCnt =0;
    int iSum = 0;

    //     1         2        3
    for(iCnt =1; iCnt <= (No1/2); iCnt++ ) // time comlexity (/2)
    {
        if((No1 % iCnt) == 0)//4
        {
           iSum = iSum + iCnt;
        }   
    }
    if(iSum == No1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);
    if(bRet == true )
    {
        printf("%d is perfect Number \n",iValue);
    }
    else
    {
        printf("%d is not perfect number \n :",iValue);
    }
    
    return 0;
}
//time complexity : 0(N/2)