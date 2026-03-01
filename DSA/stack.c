//example program
//just demonstration how stack works

#include <stdio.h>
#define SIZE 5

int stack [SIZE];
int top=-1;

//push operation

void push (int value)
{
    if(top = SIZE - 1){
        printf("Stack Overflow\n");
    }
    else {
        top ++;
        stack [top]= value;
         printf("%d pushed into stack\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    peek();
    pop();
    peek();

    return 0;
}
    