#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

int insert(int x)
{
    struct Node* temp = ((struct Node*)malloc(sizeof(struct Node)));
    temp->data = x;
    temp->next = head;
}
void print()
{
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL){
        printf("%d " ,temp->data);
        temp = temp->next;
    }
}

int main()
{
    int i, n, m;
    printf("How many values in the linked list:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       printf("Enter number %d: ",i+1);
       scanf("%d",&m);
       insert(m);
       print();
    }
    return 0;
}
