#include <stdio.h>
#include <stdlib.h>
#define max 10

int queue[max];
int front = -1;
int rear = -1;
int i;
int enqueue(int data)
{
    if((rear+1)% max == front){
        printf("Queue is full");
    }
    else
    {
        //printf("Item at the %d",rear);
        rear = (rear+1)%max;
        queue[rear] = data;
    }
}
int dequeue()
{
    if(front == -1 && rear == -1){
        printf("Queue is full.");
    }else{
    if(front == rear){
        front = rear = 0;
    }else{
    //printf("item at the front: %d \n",front);
    front = (front + 1) % max;
    }
    }
    return 1;
}
void print()
{
    for(i=0;i<max;i++){
        printf("%d\n",queue[i]);
    }
}

int main()
{
    enqueue(28);
    dequeue();
    enqueue(57);
    dequeue();
    enqueue(27);
    print();
    return 0;
}
