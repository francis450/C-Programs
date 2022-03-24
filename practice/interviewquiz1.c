#include <stdio.h>
int max = 100;
int arr[100];
int inflate(int first){
    int i;
    for(i=0;i<max;i++){
            if(i==0){
        arr[i] = first;
            }else{
                first = first + 1;
            arr[i] = first;
            }
    }
    return 1;
}
void display(){
    int i;
    for(i=0;i<max;i++){
        printf("%d \n",arr[i]);
    }
}
int main ()
{
    int target,j,i;
    inflate(1);
    display();
    printf("Enter target: ");
    scanf("%d",&target);
    for(i=0;i<max;i++){
            for(j=0;j<max;j++){
                if(target == arr[i]+arr[j]){
                    printf("indices: %d & %d, ",i,j);
                }
            }
    }
    return 0;
}
