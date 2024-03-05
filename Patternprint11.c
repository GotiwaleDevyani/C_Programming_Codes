//problame statement : accept number from user and print the character formate pattern on console.
//input : 4
// A    B   C   D
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
      
    }
     printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the the count : \n ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}