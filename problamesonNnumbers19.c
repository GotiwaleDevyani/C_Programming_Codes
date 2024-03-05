//problame Statement: accept the one  number from user and print the repeat thatcalculation of number.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

int Frequency(int Arr[],int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 21)
        {
           iFrequency++;
        }
    }
    return iFrequency;
   
}

int main()
{
    int iCount = 0 , iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of element you want enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets Allocated succesfully..\n");

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iCount);
    printf("21 occurs %d times \n",iRet);
    
    free(ptr);
    printf("Dynamic memory gets Deallocated Succesfully..\n");

    return 0;
}