//problame Statement: accept the number from user and print the odd numbers.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

//void Display(int *Arr,int iSize)
void  OddDisplay(int Arr[],int iSize)  //(100,4)
{
    int iCnt = 0;
    int iEventCnt = 0;
    printf("\n odd Elements of that array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
         if ((Arr[iCnt] % 2 ) != 0) 
         {
            printf("%d\t", Arr[iCnt]);  
         }
    }

    printf("\n");
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

   OddDisplay(ptr,iCount); //Display(100,4)
   printf("Number of odd element are : %d\n");

    free(ptr); //free(100)

    printf("Dynamic memory gets Deallocated Succesfully..\n");

    return 0;
}