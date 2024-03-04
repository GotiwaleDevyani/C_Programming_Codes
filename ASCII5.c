#include<stdio.h>
#include<stdbool.h>
//ASCII Table Display. Accept the latter from user and converted it into  small latter . .
char CnvertSmall(char cValue)
{
    return cValue + 32;
}
int main()
{
    char ch = '\0';
    char  cRet = '\0';
    printf("Enter the character : \n");
    scanf("%c",&ch);

    cRet = CnvertSmall(ch);
    
    printf("Converted small letter is %c\n",cRet);

    return 0;
}
