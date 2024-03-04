#include<stdio.h>
#include<stdlib.h>

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

    if(*Head == NULL) //LL is empty
    {
        *Head = newn; //first node address..
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    //Temporary pointer for LL Traversal
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL) //LL is empty
    {
        *Head = newn; //first node address..
    }
    else
    {
        //Travel the LL till Last node
        while(Temp->next != NULL)
        {
          Temp = Temp -> next;
        }
        //Add the address of new node at the end of last node.
        Temp->next = newn;
    }
}
void Display(PNODE Head)
{
    printf("Contents of linked List : \n");

    while (Head != NULL)
    {
       printf(" | %d | -> ",Head->data);
       Head = Head->next;
    }
    printf("NULL \n");  
}
int Count(PNODE Head)
{
   int iCnt = 0;

    while (Head != NULL)
    {
       iCnt++;
       Head = Head->next;
    }
    return iCnt; 
}
void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) //case 1
    {
        return;
    }
    else if((*Head) -> next == NULL) //case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else //case 3
    {
        *Head = (*Head) -> next;
        free(Temp);
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL) //case 1
    {
        return;
    }
    else if((*Head) -> next == NULL) //case 2
    {
        free(*Head);
        *Head = NULL;

    }
    else //case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp ->next = NULL;
    }
    
}
void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    //Case 1 : Invalide Position (Ex : 11/ -2/8)
    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalide Position\n");
        return;
    }
    //Case 2 : First Possition   (Ex : 1)
    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }
    //Case 3 : Last Position     (Ex : 7)
    else if(iPos == Size + 1)
    {
        InsertLast(Head, No);
    }
    //case 4 : position is in between First anf Last (Ex : 5)
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void DeleteAtPos(PPNODE Head,int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;
    PNODE targatednode = NULL;
   
    //Case 1 : Invalide Position (Ex : 11/ -2/8)
    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalide Position\n");
        return;
    }
    //Case 2 : First Possition   (Ex : 1)
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    //Case 3 : Last Position     (Ex: 6)
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    //case 4 : position is in between First anf Last (Ex : 5)
    else
    {
          for(i = 1; i < iPos-1; i++)
          {
            temp = temp->next;
          }
          temp->next = temp->next->next; // targatedNode->next;
          free(targatednode);
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertLast(&First, 121);

    InsertAtPos(&First,105,5);

    Display(First);
    iRet = Count(First);
    printf("Number of node are : %d\n",iRet);
   
    DeleteAtPos(&First,5);

    Display(First);
    iRet = Count(First);
    printf("Number of node are : %d\n",iRet);
    return 0;
}