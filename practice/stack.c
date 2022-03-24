#include <stdio.h>
#define max 10
int arr[max];
int top = -1;
int push(int data){
if(top == max-1){
    printf("stack is full");
    return 0;
}else{
    top++;
    arr[top] = data;
}
return data;
}
void pop(){
    if(top == -1){
        printf("stack is empty");
        return 9;
    }else{
        printf("To pop: %d",arr[top]);
        top--;
    }
    return 0;
}
void print(){
    int i;
    for(i=0;i<max-1;i++){
        printf("%d\n",arr[i]);
    }
}
int main()
{
    push(60);
    //pop();
    push(6784);
    print();
    return 0;
}
