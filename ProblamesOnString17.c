#include<stdio.h>
//using Static memoery: %s = String.// Accept the String from user And replace the latter a.
void Replace(char str[])
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' ||*str == 'I'||*str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o'|| *str == 'u' )
        {
            *str = '_';
        }
        str++;
    }
    
}
int main()
{
    char Arr[20]; //Static memoery Allowcation.
    
    
    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);


    Replace(Arr); //strlenX(100);
    
    printf("Updated string is : %s\n",Arr);

    return 0;
}