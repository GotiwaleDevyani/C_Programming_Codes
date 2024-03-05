//problame statement : accept number from user and print the Number line pattern on console.
//input : 4
// -4 -3 -2- 1 0  1  2   3   4  
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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