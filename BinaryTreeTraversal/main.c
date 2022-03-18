#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 10
struct Node* queue[max];
int rear = -1;
int front = -1;

struct Node
{
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* root;

bool isfull()
{
    if(front == max-1)return true;
    else return false;
}
bool isempty()
{
    if(rear == -1 && front == -1)return true;
    else return false;
}
void enqueue(struct Node* x)
{
    if(isfull() == true)return;
    else{
     if(rear == -1 && front== -1){
        rear=front=0;
        queue[rear] = x;
     }else{
        rear = rear + 1;
        queue[rear] = x;
     }
    }
}

void dequeue()
{
    if(isempty())return;
    else {
        int data = queue[front];
        front = front + 1;
        return 1;
    }
}

struct Node* CreateNewNode(char x)
{
    struct Node* newnode = ((struct Node*)malloc(sizeof(struct Node)));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
}

struct Node* Insert(struct Node* root, char data)
{
    if(root == NULL)
    {
        root = CreateNewNode(data);
        return root;
    }
    else
    {
        if(data <= root->data ){
            root->left = Insert(root->left,data);
        }else{
            root->right = Insert(root->right,data);
        }
    }
}
void display()
{
    int i;
    for(i=0;i<max;i++){
        printf("%d\n",queue[i]);
    }
}
void LevelOrder(struct Node* root)
{
    if(root == NULL) return;
    else{
    enqueue(root);
    //display();
    //printf("%d",queue[front]);
    while(!isempty()){
        struct Node* curr = queue[front];

        printf("%c ",curr->data);
        //enqueue children of this node
        if(curr->left != NULL) enqueue(curr->left);
        if(curr->right != NULL) enqueue(curr->right);
        dequeue();
    }
    }
}
bool Search(struct Node* root,int x)
{
        if(root == NULL) return 0;
       else if(root->data == x) return 1;
       else if(x<=root->data)return Search(root->left,x );
       else return Search(root->right,x);
}
int main()
{
    struct BstNode* root = NULL;

    root = Insert(root,'A');
    root = Insert(root,'B');
    root = Insert(root,'C');
    root = Insert(root,'D');
    root = Insert(root,'E');
    root = Insert(root,'F');
    root = Insert(root,'G');
    root = Insert(root,'H');
    root = Insert(root,'I');
    root = Insert(root,'J');
    root = Insert(root,'K');

    //display();
    char data;
    printf("Enter character to be searched: ");
    scanf("%c",&data);
    Search(root,data);
    if(Search(root,data) == 1 ) printf("Found\n");
    else printf("Not Found\n");

    LevelOrder(root);
    return 0;
}
