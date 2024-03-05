#include<stdio.h>
//using Static memoery: %s = String.// Accept the input from user.

int main()
{
    char Arr[20]; //Static memoery Allowcation.

    printf("Enter the String :\n");
    gets(Arr);

    printf("Entered String is : %s\n",Arr);

    return 0;
}