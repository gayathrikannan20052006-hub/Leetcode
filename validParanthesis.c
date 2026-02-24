#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10080
typedef struct {
    char items[MAX];
    int top;
} Stack;
void initStack(Stack* s) {
    s->top = -1;
}
bool isEmpty(Stack* s) {
    return s->top == -1;
}
void push(Stack* s, char item) {
    if (s->top < MAX - 1) {
        s->items[++(s->top)] = item;
    }
}
char pop(Stack* s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    }
    return '\0'; 
}
bool isValid(char* s) {
    Stack stack;
    initStack(&stack);
    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];
        if (current == '(' || current == '{' || current == '[') {
            push(&stack, current);
        }
        else if (current == ')' || current == '}' || current == ']') {
            if (isEmpty(&stack)) {
                return false;
            }
            char top = pop(&stack);
            if ((current == ')' && top != '(') ||
                (current == '}' && top != '{') ||
                (current == ']' && top != '[')) {
                return false;
            }
        }
    }
    return isEmpty(&stack);
}
