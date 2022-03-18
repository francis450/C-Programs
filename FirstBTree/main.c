#include <stdio.h>
#include <stdlib.h>

struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
struct BstNode* root;//root node
struct BstNode* CreateNewNode(int x)//template node with left and right pointers NULL
{
    struct BstNode* newnode = ((struct BstNode*)malloc(sizeof(struct BstNode)));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
}
struct BstNode* Insert(struct BstNode* root,int data)
{
   if(root == NULL ){
    root = CreateNewNode(data);
    //if the tree is empty the newly created node becomes the root
    return root;
   }else{
       // this means the tree has some nodes hence we check to which side of the tree the new node should go
        if(data <= root->data){
                //if the data in the new node is less than or equal to its parent/root data
            root->left = Insert(root->left,data);//we use the insert function recursively to create multiple node using one function
        //it goes to the left of the root/parent
        }else{
            //if its greater it goes to the right of the root
            root->right = Insert(root->right,data);
        }
   }
}
_Bool Search(struct BstNode* root,int x)
{
        if(root == NULL) return 0;
       else if(root->data == x) return 1;
       else if(x<=root->data)return Search(root->left,x );
       else return Search(root->right,x);
}
int main()
{
    struct BstNode* root = NULL;
    root = Insert(root,15);root = Insert(root,10);root = Insert(root,20);
    root = Insert(root,25);root = Insert(root,8);root = Insert(root,12);
    printf("Please Enter Number To be search: ");
    int data;
    scanf("%d",&data);
    Search(root,data);
    if(Search(root,data) == 1 ) printf("Found");
    else printf("Not Found");
    return 0;
}
