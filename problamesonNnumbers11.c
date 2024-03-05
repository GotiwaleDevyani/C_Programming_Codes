//problame Statement: accept the number from user and print the Addition of all numbers.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

//void Display(int *Arr,int iSize)
int SumDisplay(int Arr[],int iSize)  //(100,4)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt= 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iCount = 0, iCnt = 0 ,iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of Elements that you want to enter :\n");

    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets succesfully Allocated for %d elements\n",iCount);

    printf("Enter the %d values : \n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)  //0(N)
    {
        printf("\n Enter the element no %d : ",iCnt+1);

        scanf("%d",&ptr[iCnt]);
    }

   iRet = SumDisplay(ptr,iCount); //Display(100,4)
   printf("sum of all element are : %d\n",iRet);

    free(ptr); //free(100)

    printf("Dynamic memory gets Deallocated Succesfully..\n");

    return 0;
}