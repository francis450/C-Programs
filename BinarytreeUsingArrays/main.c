#include <stdio.h>
#include <stdlib.h>
int power(int x){
    int i;
    int pow = 1;
    for( i = 0;i < x; i++){
        pow = pow * 2;
    }
    return pow;
}
void Btree(int levels)
{
    int max_nodes = power(levels) - 1;
    //printf("%d",max_nodes);
    int arr[max_nodes];
    printf("Please enter %d values: ", max_nodes);
    int i;
    for(i=0;i<max_nodes;i++){
        scanf("%d",&arr[i]);
    }
    printf("%Root: %d\n",arr[0]);
    levels--;
    for(i=0;i<max_nodes;i++)
    {
        int left = 2*i + 1;
        int right = 2*i + 2;
        while(levels > 0){
        printf("Parent: %d\n",arr[i]);
        printf("Children: %d %d",arr[left],arr[right]);
        printf("\n");
        levels = levels - 1;
        }
    }
}

int main()
{
    int level;
    printf("please Enter number of levels to have on the perfect binary tree: ");
    scanf("%d",&level);
    Btree(level);

    return 0;
}
