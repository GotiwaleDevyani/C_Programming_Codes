#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user and Check it is Vovels or not.

int CountVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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


    iRet = CountVowels(Arr); //strlenX(100);
    
    printf("Frequency of Vowels is : %d\n",iRet);

    return 0;
}