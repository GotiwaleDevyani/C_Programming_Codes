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
void EvenDisplay(PNODE Head)
{
    printf("Even elements are : \n");

    while(Head != NULL)
    {
        if(((Head->data) % 2) == 0)
        {
            printf("%d\n",Head->data);

        }
        Head = Head ->next;
    }
}
int Sum(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum = iSum + (Head ->data);
        Head = Head ->next;
    }
    return iSum;
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
    
    Display(First);
    
    EvenDisplay(First);
    iRet = Sum(First);
    printf("Addition is : %d\n",iRet);

    return 0;
}