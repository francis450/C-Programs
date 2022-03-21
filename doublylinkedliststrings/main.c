#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head;
struct Node* GetNewNode(int x)
{
    struct Node* newnode = ((struct Node*)malloc(sizeof(struct Node)));
    newnode -> data = x;
    newnode -> prev = NULL;
    newnode -> next = NULL;
};
void InsertAtHead(int x)
{
    struct Node* newnode = GetNewNode(x);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void print()
{
    struct Node* temp = head;
    printf("Forward:");
    while(temp != NULL)
    {
        printf("%d ,",temp->data);
        temp = temp -> next;
    }
}
void ReversePrint(){
     struct Node* temp = head;
     if(temp == NULL)return;
     //Going to last node
     while(temp->next != NULL)
     {
         temp = temp -> next;
     }
     //traversing backward using prev pointer
     printf("\nReverse: ");
     while(temp != NULL){
        printf("%d, ",temp->data);
        temp = temp -> prev;
     }
     printf("\n");
 }
int main()
{
    head = NULL;
    InsertAtHead(87);print();ReversePrint();
    InsertAtHead(245);print();ReversePrint();
    InsertAtHead(89);print();ReversePrint();
    InsertAtHead(67);print();ReversePrint();
    return 0;
}
