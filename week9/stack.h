#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

struct Node_Internals;
typedef struct Node_Internals* Node;

struct Stack_Internals;
typedef struct Stack_Internals* Stack;

void init_stack(Stack *sp);
bool isEmpty(Stack s);
void *top(Stack s);
void push(Stack s, void* i);
void pop(Stack s);

#endif //Stack_H
