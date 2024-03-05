//problame statement : accept number from user and print the number in linear way console.
//input : 6
//1  2   3   4   5   6
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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