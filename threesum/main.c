#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {6,23,35,21,4,23,465,3,56,88};
    int three = 556;
    int i ,j ,k;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    for(i=0;i < 10; i++)
    {
        for(j = 0;j < 10;j++){
            for(k = 0;k < 10;k++){
                if((arr[i] + arr[j] + arr[k]) == three )
                {
                    //printf("%d %d %d",arr[i],arr[j], arr[k]);
                    ptr1 = arr[i];
                    ptr2 = arr[j];
                    ptr3 = arr[k];
                }
            }
        }
    }
    printf("%d %d %d",ptr1,ptr2,ptr3);
    return 0;
}
