#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;//pointer to node
};
struct Node* head;
int i;
void Insert(int data,int n)
{
    struct Node* temp1 = ((struct Node*)malloc(sizeof(struct Node)));
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    for(i=0;i<n-2;i++)
    {
        temp2 = temp2 -> next;
    }
        temp1 -> next = temp2->next;
        temp2 -> next = temp1;
}
void print()
{
    struct Node* temp = head;
    printf("Values: ");
    while(head != NULL){
        printf("%d, ",temp->data);
        temp = temp -> next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    print();
    return 0;
}
