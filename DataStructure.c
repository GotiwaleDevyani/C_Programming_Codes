#include<stdio.h>
#include<stdlib.h>

//Structure Decleration...
struct Node
{
    int data;           //4 bytes
    struct node *next;  //8 bytes self referential structure.
    
};

int main()
{
    struct node *First = NULL; //pointer
   

    return 0;
}