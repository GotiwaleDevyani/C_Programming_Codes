//problame Statement: accept the number from user tored that number and allowcate and deallowocate the memory.
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

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

    printf("your enter elements are : \n");
//          1          2          3
    for(iCnt = 0; iCnt< iCount;iCnt++)
    {
       printf("%d\t",ptr[iCnt]); //4 ptr iCnt[ 10   20  30  40]
    }
    printf("\n");

    return 0;
}