#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user count the space.
void  CountSpace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet =0;
    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);


     iRet = CountSpace(Arr); //strlenX(100);
    
    printf("Counted Space is : %d\n",iRet);

    return 0;
}