//problame Statement : check number is palindrom or not
#include<stdio.h>
#include<stdbool.h>


bool CheckPallindrom(int iNo)
{
    int iCopy = iNo; //Xerox kadhali,copy the value 
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    return(iRev == iCopy);
    //if(iRev == iCopy)
    //{ return true;}
    //else
    //{ return false;}
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrom(iValue);
    if (bRet == true)
    {
         printf(" %d is a Pallindrom number \n",iValue);
    }
    else
    {
        printf(" %d is not a Pallindrom number \n",iValue);
    }
   
    return 0;
}