#include<stdio.h>
#include<stdlib.h>

//Structure Decleration...
struct Node
{
    int data;           //4 bytes
    struct node *next;  //8 bytes self referential structure.   
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int NO)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = NO;
    newn->next = NULL;

    //step 3 : Check whether LL is Empty or not 
    if(*Head == NULL) //LinkList is empty
    {
        *Head = newn;
    }
    else //LL contains atleast 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements of Linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | ->", Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE First = NULL; //pointer

    InsertFirst(&First,51); //callbyAddress
    InsertFirst(&First,21); //callbyAddress
    InsertFirst(&First,11); //callbyAddress
    
    Display(First);

    return 0;
}