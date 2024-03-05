#include<stdio.h>
//problame Statement: Display * on screen.
void Display(int iNo)
{
    int iCnt =0;
//       step:1      step:2    step:3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       //printf("*\n"); //step:4 \n new line 
       //*
       //* 
       //*
       printf("*\t"); //\t tab
       //*  *   *
    }
}

int main()
{
    int iValue = 0;
    printf("Enter how many number You want to display * Screen\n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}