#include<stdio.h>
//using Static memoery: %s = String.// Accept the input from user.

void Display(char str[])
{
    printf("String is : %s\n",str);

}
int main()
{
    char Arr[20]; //Static memoery Allowcation.

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    
    return 0;
}