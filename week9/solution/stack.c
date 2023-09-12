#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Structure for a linked list node
struct Node_Internals {
    void* data;
    Node next;
};

// Node is a pointer to the Node_Internals structure 
typedef struct Node_Internals* Node;

// Structure for the stack ADT implemented as a linked list
struct Stack_Internals {
    Node top;
};

// Stack is a pointer to the Stack_Internals structure
typedef struct Stack_Internals* Stack;

/*
* Creates a new stack node and returns a pointer to it
*/
Node newNode(char data) {
    Node newNode = (Node)malloc(sizeof(struct Node_Internals));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed for node.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/*
* Creates a new stack and stores it in the address pointed to by sp
*/
void init_stack(Stack* sp) {
	*sp = (Stack)malloc(sizeof(struct Stack_Internals));
    if (*sp == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    (*sp)->top = NULL;
}

/* 
* Checks for emptiness of a stack
* Returns true if empty, false otherwise
*/
bool isEmpty(Stack s) {
	// TODO: implement this!
    return s->top == NULL;
}

/*
* Returns the top item of the stack 
*/
void* top(Stack s) {
    if (isEmpty(s)) {
        fprintf(stderr, "Stack is empty. Cannot retrieve top element.\n");
        exit(1);
    }

    return s->top->data;
}

/* 
* Removes the top item from the stack
*/
void pop(Stack s) {
    if (isEmpty(s)) {
        fprintf(stderr, "Stack is empty. Cannot retrieve top element.\n");
        exit(1);
    }

    Node toFree = s->top;
    s->top = toFree->next;
    free(toFree);
}

/*
* Adds a new item to the stack
*/
void push(Stack s, void* i) {
    Node node = newNode(i);
    if (node == NULL) {
        fprintf(stderr, "Memory allocation failed for stack node.\n");
        exit(1);
    }

    node->next = s->top;
    s->top = node;
}
