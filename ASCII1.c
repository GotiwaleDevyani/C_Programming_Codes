#include<stdio.h>
//ASCII Table Display..
int main()
{
    int iCnt = 0;

    printf("----------------------------------------\n");
    printf("-----------ASCII TABLE----------------\n");
    printf("----------------------------------------\n");
    
    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
         printf("%c\t %d\t %o\t %x\t\n",iCnt,iCnt,iCnt,iCnt);
    }
     printf("----------------------------------------\n");
    return 0;

}
