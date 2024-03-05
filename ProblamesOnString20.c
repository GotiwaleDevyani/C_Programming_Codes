#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user And replace the latter a.
void strtoggleX(char str[])
{
   
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <='Z')
        {
             *str = *str + 32;
        }
     str++;
    }
    
}
int main()
{
    char Arr[20]; //Static memoery Allowcation.
    
    
    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);


   strtoggleX(Arr); //strlenX(100);
    
    printf("Updated string is : %s\n",Arr);

    return 0;
}