//problame statement : accept number from user and print the character formate pattern on console.
//input : 4
// a    b   c   d
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++,ch++)
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