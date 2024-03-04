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

int main()
{
    PNODE First = NULL; //pointer
   

    return 0;
}