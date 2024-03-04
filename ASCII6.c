#include<stdio.h>
#include<stdbool.h>
//ASCII Table Display. Accept the latter from user and Convert  it into Capital latter. .
char CnvertCapital(char cValue)
{
    return cValue - 32;
}
int main()
{
    char ch = '\0';
    char  cRet = '\0';
    printf("Enter the character : \n");
    scanf("%c",&ch);

    cRet = CnvertCapital(ch);
    
    printf("Converted Capital letter is %c\n",cRet);
    
    return 0;
}
