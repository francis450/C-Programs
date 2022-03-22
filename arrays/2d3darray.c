#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,pos,data,size;
    printf("Please Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d values: ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter position: ");
    scanf("%d",&pos);
    printf("Enter data: ");
    scanf("%d",&data);
    for(i = size;i > pos-1; i--){
        arr[i] = arr[i+1];
    }
    size++;
    arr[pos-1] = data;
    for(i = 0;i < size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
