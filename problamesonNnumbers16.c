//problame Statement: accept the N number from user and print the MAximum Number.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iCount = 0 , iCnt = 0 ,iRet = 0;
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

    iRet = Maximum(ptr,iCount);
    printf(" Maximum element  is : %d \n",iRet);

    free(ptr);
    printf("Dynamic memory gets Deallocated Succesfully..\n");

    return 0;
}