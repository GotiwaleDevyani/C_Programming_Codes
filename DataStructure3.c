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

void InsertFirst(PPNODE Head, int No)
{
    //Step1: Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    //Step2: Initialise the node
    newn->data = No;
    newn->next = NULL;

    //step 3 : Check whether LL is Empty or not 
    if(*Head == Null) //LinkList is empty
    {
        *Head = newn;
    }
    else //LL contains atleast 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL; //pointer

    InsertFirst(&First,51); //callbyAddress
    InsertFirst(&First,21); //callbyAddress
    InsertFirst(&First,11); //callbyAddress
   

    return 0;
}