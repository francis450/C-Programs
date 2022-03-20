#include <stdio.h>
#include <stdbool.h>
#define max 10
//int max =10;
int front = -1;
int rear = -1;
int queue[max];
bool isfull()
{
    if(rear == max-1){
        return 1;
    }else{
        return 0;
    }
}
bool isempty()
{
    if(front == -1){
        return 1;
    }else{
        return 0;
    }
}
int enqueue(int value){
    if(isfull()){
        printf("queue is full");
    }else{
        if(front == -1 && rear == -1){
            front = rear = 0;
        }else{
            rear = rear + 1;
            queue[rear] = value;
        }
    }
    return value;
}
int dequeue(){
    int i;
    if(isempty()){
        printf("The queue is empty");
        return 0;
    }else{
        //front = front + 1;
        for(i=front;i<max-1;i++){
            queue[i] = queue[i+1];
        }
    }
}
void display(){
    int i;
    printf("The queue:");
    for(i=0;i<max;i++){
        printf("%d\n",queue[i]);
    }
}
int main()
{
     enqueue(10);
     enqueue(20);
     enqueue(30);
     enqueue(40);
     enqueue(50);
     dequeue();
     display();
    return 0;
}
