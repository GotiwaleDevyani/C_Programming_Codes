#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user and count the how many times a is occured on String.

int Counta(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
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

    iRet = Counta(Arr); //strlenX(100);
    
    printf("Count of a latter is : %d\n",iRet);

    return 0;
}