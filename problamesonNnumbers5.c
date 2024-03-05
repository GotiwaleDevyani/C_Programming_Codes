//problame Statement: accept the number from user tored that number and allowcate and deallowocate the memory.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

//void Display(int *Arr,int iSize)
void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    printf("Elements of that array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of Elements that you want to enter :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);
    free(ptr);

    return 0;
}