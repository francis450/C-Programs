#include<stdio.h>
#define n 10
int arr[n];
int rear=-1;
int front=0;
int count=0;
int dequeue(){
if(isempty()){
return 0;}else{
int data = arr[front];
front = front+1;
return 1;
}
}
int enqueue (int data){
if(isfull()){
return 0;}else{
rear = rear+1;
arr[rear]=data;
return data;
}
}
void display (){
int i;
for(i=0;i<n;i++){
print("%d",arr[i]);
int main(){
int u;
printf("please enter a number: ");
scanf("%d",&u);
enqueue (u);
display ();

}}