#include<stdio.h>
#include<stdbool.h>
//Problame Statement : Accept one number from user and check it is a prime number or not.

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0) //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if( bRet == true)
    {
        printf("%d is a prime number \n", iValue);
    }
    else
    {
        printf("%d is a Not a prime number \n", iValue);
    }

    return 0;
}