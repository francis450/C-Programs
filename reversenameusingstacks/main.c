#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 7

int top = -1;
int stack[max];
int reversestack[max];

bool isfull()
{
    if(top == max-1)return true;
    else return false;
}

bool isempty()
{
    if(top == -1)return true;
    return false;
}

int push(char x)
{
    if(isfull())return 0;
    else{
        top++;
        stack[top] = x;
        return x;
    }
}

int pushreverse(char x)
{
    if(isfull())return 0;
    else{
        top++;
        reversestack[top] = x;
    }
}

int pop()
{
    if(isempty())return 0;
    else{
        pushreverse(stack[top]);
        top--;
    }
}

void display()
{
    int i;
    printf("Name: ");
    for(i=0;i<max;i++)
    {
        printf("%c",stack[i]);
    }
    printf("\n");
}
void displayreverse()
{
    int i;
    printf("Name in reverse: ");
    for(i=0;i<max;i++)
    {
        printf("%c",reversestack[i]);
    }
}

int main()
{
    push('f');
    push('r');
    push('a');
    pop();
    push('n');
    push('c');
    push('i');
    push('s');
    display();
    int i;
    for(i=0;i<max;i++){
        pop();
    }
    display();
    displayreverse();

    return 0;
}
