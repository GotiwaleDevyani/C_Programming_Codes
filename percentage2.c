#include<stdio.h>
// probleam statement : Accepts the marks from user and calculate the total percentage
float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;
        
        if((iMarks < 0) || (iTotal < 0))  //filter
        {
            printf("Invalide inpute\n");
            return fPercentage;
        }
        
        if(iMarks > iTotal)           //Filter
        {
            printf("Invalide inpute\n");
            return fPercentage;
        }

    fPercentage = (((float)iMarks / (float)iTotal)*100);  //type casting
    return fPercentage;

}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the Marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the Total Marks : \n");
    scanf("%d",&iValue2);
     
    fRet = CalculatePercentage(iValue1, iValue2);
     
    printf("Your Percentage is : %f\n",fRet);

    return 0;

}