#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user and count the number on String.

int strlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
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

    iRet = strlenX(Arr); //strlenX(100);
    printf("Length of String is : %d\n",iRet);

    return 0;
}