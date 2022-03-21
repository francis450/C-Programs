#include <stdio.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* CreateNewnode(int x)
{
    struct Node* Newnode = ((struct Node*)malloc(sizeof(struct Node)));
    Newnode->data = x;
    Newnode->prev = NULL;
    Newnode->next = head;
    return Newnode;
 }
 void InsertAtHead(int x)
 {
     struct Node* newnode = CreateNewNode(x);
     if(head == NULL){
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
     printf("Forward: ");
     while(head != NULL){
        printf("%d",temp->data);
        temp = temp-> next;
     }
     printf("\n");
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
     printf("Reverse: ");
     while(temp != NULL){
        printf("%d",temp->data);
        temp = temp -> prev;
     }
     printf("\n");
 }
int main()
{
    head = NULL;
    InsertAtHead(78); print();ReversePrint();
    InsertAtHead(78); print();ReversePrint();
    InsertAtHead(39); print();ReversePrint();
    InsertAtHead(39); print();ReversePrint();
    return 0;
}
