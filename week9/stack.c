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
	// TODO: implement this by using malloc to allocate memory for a Stack_Internals struct and store the resulting pointer (casted as Stack) in the address that sp points to. Then initilise the "top" field if *sp is not NULL
}

/* 
* Checks for emptiness of a stack
* Returns true if empty, false otherwise
*/
bool isEmpty(Stack s) {
	// TODO: implement this!
}

/*
* Returns the top item of the stack 
*/
void* top(Stack s) {
	// TODO: implement this by returning the data field of the node at the "top" of the stack (if the stack is not empty).
}

/* 
* Removes the top item from the stack
*/
void pop(Stack s) {
	// TODO: implement this through the following steps
    // 1. check that the stack is not empty
    // 2. create a temporary variable to store the node at the top of the stack (eg. Node temp = ?)
    // 3. set the "top" field of the Stack_Internals struct to be the second node in the linked list (the new top node)
    // 4. free the old top node which is stored in the temporary variable
}

/*
* Adds a new item to the stack
*/
void push(Stack s, void* i) {
    // TODO: implement this through the following steps
    // 1. create a new node
    // 2. check that the newly created node is not NULL
    // 3. set the "next" field of the new node 
    // 4. set this new node to be the top of the stack
}