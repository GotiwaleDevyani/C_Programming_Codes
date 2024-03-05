//problame Statement: Accept the one number from user and find the all factors of that number.
#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int No1)
{
    int iCnt =0;
    printf("Factors of %d are :\n",No1);
    //     1         2        3
    for(iCnt =1; iCnt < No1; iCnt++ )
    {
        if((No1 % iCnt) == 0)//4
        {
            printf("%d\n",iCnt); 
        }
    }

}
int main()
{
    int iValue= 0;
   
    printf("Enter The Number : \n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    
    

    return 0;
}