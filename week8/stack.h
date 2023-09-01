#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_SIZE 10000

struct stack_char {
    int count;
    char elements[MAX_SIZE];
};

typedef struct stack_char* stack;

void init_stack(stack *sp);
bool isEmpty(stack s);
bool isFull(stack s);
void *top(stack s);
void push(stack s, void *i);
void pop(stack s);

#endif