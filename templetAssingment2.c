#include<stdio.h>
#include<stdlib.h>
//evenDisplay

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
int Frequency(PNODE Head, int no)
{
   int iCnt = 0;

    while(Head != NULL)
    {
        if((Head->data) == no)
        {
           iCnt++;
        }
        Head = Head ->next;
    }
    return iCnt;
}
int FirstOccurance(PNODE Head, int no)
{
    int ipos = 1;

    while(Head != NULL)
    {
        if((Head->data) == no)
        {
          break;
        }
        Head = Head ->next;
        ipos++;
    }
    if(Head == NULL)
    {
       return -1;
    }
    else
    {
      return ipos;
    }
}
int LastOccurance(PNODE Head, int no)
{
    int ipos = 1;
    int iCnt = 1;

    while(Head != NULL)
    {
        if((Head->data) == no)
        {
          ipos = iCnt;
        }
        Head = Head ->next;
        iCnt++;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 11);
    InsertFirst(&First, 7);
    InsertFirst(&First, 21);
    InsertFirst(&First, 20);
    InsertFirst(&First, 5);
    InsertFirst(&First, 3);
    
    Display(First);
    
    iRet = Frequency(First,11);
    printf("Frequency  is : %d\n",iRet);

    iRet = FirstOccurance(First,11);
    printf("FirstOccurance  is : %d\n",iRet);

    
    iRet = LastOccurance(First,11);
    printf("LastOccurance is : %d\n",iRet);




    return 0;
}