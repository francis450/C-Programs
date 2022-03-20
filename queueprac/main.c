#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 4
int queue[max];
int rear = -1;
int front = -1;

bool isempty()
{
    if(front == -1 && rear == -1)return true;
    else return false;
}
bool isfull()
{
    if(rear == max-1)return true;
    return false;
}

int enqueue(int x)
{
    if(isfull())return 0;
    else{
        if(isempty()){
            rear = front = 0;
            queue[rear] = x;
        }else{
            rear = rear + 1;
            queue[rear] = x;
        }
    }

}

void dequeue()
{
    if(isempty())return;
    else{
        int data = queue[front];
        ++front;
    }
}

void display()
{
    int i;
    for(i = 0; i < max;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    enqueue(20);
    enqueue(45);
    dequeue();
    enqueue(56);
    display();
    //dequeue();

    return 0;
}
