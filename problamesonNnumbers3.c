//problame Statement: accept the number from user tored that number and allowcate and deallowocate the memory.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

void Display(int *Arr,int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iCount);
     //typecasting
         // |
    ptr = (int *)malloc(iCount * sizeof(int)); //default return value of malloc is void* //malloc is use to store accedress.
    
    printf("Enter the elements : \n");
//          1          2          3
    for(iCnt = 0; iCnt< iCount;iCnt++)
    {
       scanf("%d",&ptr[iCnt]); //4   & ptr iCnt[0,1,2,3,4];
    }

    Display(ptr,iCount);

    return 0;
}