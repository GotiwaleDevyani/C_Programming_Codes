#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user And replace the latter a.
void StrlwrX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str =*str + 32;
        }
     str++;
    }
    
}
int main()
{
    char Arr[20]; //Static memoery Allowcation.
    
    
    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);


   StrlwrX(Arr); //strlenX(100);
    
    printf("Updated string is : %s\n",Arr);

    return 0;
}