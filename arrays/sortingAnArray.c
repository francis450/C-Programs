#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {35,14,23,87,43};
    int i,j;
    int *ptr;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        {
            if(ptr>arr[j]){
                arr[i] = arr[j];
            }
        }
    }
    for(i=0;i<5;i++){

            cout<<"%d"<<arr[i];

    }
    return 0;
}
