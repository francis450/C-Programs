#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 10
int stack[max];
int top = -1;

bool isempty()
{
    if(top == -1)return 1;
    else return 0;
}

bool isfull()
{
    if(top == max-1)return 1;
    else return 0;
}

int push(int x)
{
    if(isempty())
    {
        stack[++top] = x;
    }else{
        if(!isfull())
        {
            stack[++top] = x;
        }
        else
        {
            printf("StackOverflow");
        }
    }
}

void pop()
{
    if(isempty())
    {
        printf("stack is empty");
    }else{
        --top;
    }
}
void Print()
{
    int i;
    for(i = top;i>-1;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    push(19);
    push(20);
    push(60);
    Print();
    pop();
    Print();
    return 0;
}
