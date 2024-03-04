#include<stdio.h>
//ASCII valuse display..
int main()
{
    char ch = '\0';

    printf("Enter the character :\n");
    scanf("%c",&ch);

    printf("ASCII value of the character in Decimal is : %d\n",ch);
    printf("ASCII value of the character in Decimal is : %o\n",ch);
    printf("ASCII value of the character in Decimal is : %x\n",ch);

    return 0;

}
