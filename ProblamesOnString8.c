#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user and count the Frequcancy how many times a specific latter is  occured on String.

int Count(char str[],char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character for frequcancy calculation : \n");
    scanf(" %c",&cValue); //with thw help of space  %c the enter is removed.

    iRet = Count(Arr,cValue); 
    
    printf("Frequency of a latter is : %d\n",iRet);

    return 0;
}