/*
🔹 Problem: Valid Parentheses
LeetCode #20
Given a string s containing only:

'(', ')', '{', '}', '[', ']'

Determine if the input string is valid.
A string is valid if:
Open brackets are closed by the same type
Open brackets are closed in the correct order
Every closing bracket has a corresponding opening bracket
🔹 Example
Input:  "()[]{}"
Output: true
Input:  "(]"
Output: false
Input:  "({[]})"
Output: true
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000  // Maximum length of the string

// Stack structure
typedef struct {
    char data[MAX];
    int top;
} Stack;

// Initialize stack
void init(Stack* st) {
    st->top = -1;
}

// Push
bool push(Stack* st, char c) {
    if (st->top == MAX - 1) return false; // Stack overflow
    st->data[++st->top] = c;
    return true;
}

// Pop
char pop(Stack* st) {
    if (st->top == -1) return '\0'; // Stack underflow
    return st->data[st->top--];
}

// Peek
char peek(Stack* st) {
    if (st->top == -1) return '\0';
    return st->data[st->top];
}

// Check if stack is empty
bool isEmpty(Stack* st) {
    return st->top == -1;
}

// Function to check valid parentheses
bool isValid(char* s) {
    Stack st;
    init(&st);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        // If opening bracket, push to stack
        if (c == '(' || c == '{' || c == '[') {
            push(&st, c);
        } 
        // If closing bracket
        else {
            if (isEmpty(&st)) return false;

            char top = pop(&st);

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }

    return isEmpty(&st);
}

// Test the function
int main() {
    char str[MAX];
    printf("Enter parentheses string: ");
    scanf("%s", str);

    if (isValid(str)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}