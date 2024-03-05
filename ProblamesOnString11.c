#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user and count the how many times a is occured on String.

int CountDigits(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <='9'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
}
int main()
{
    char Arr[20]; //Static memoery Allowcation.
    int iRet = 0;
    
    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);


    iRet = CountDigits(Arr); //strlenX(100);
    
    printf("Frequency of Ditits is : %d\n",iRet);

    return 0;
}