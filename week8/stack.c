#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
* C version of constructor for stack 
*/
void init_stack(stack* sp) {
	// TODO: implement this by using malloc to allocate memory for a stack and store the result in s
}

/* 
* Checks for emptiness of a stack
* Returns true if empty, false otherwise
*/
bool isEmpty(stack s) {
	// TODO: implement this!
}

/*
* Checks whether a stack is full (no more space in array)
* Returns true if full, false otherwise
*/
bool isFull(stack s){
	// TODO check that count is not greater than or equal to the size of the elements array 
}

/*
* Returns the top item of the stack 
*/
void* top(stack s) {
	// TODO: implement this by returning the value at the "top" of the stack if the stack is not empty.
}

/* 
* Removes the top item from the stack
*/
void pop(stack s) {
	// TODO: implement this by changing the approprate field in the stack_char struct (only if the stack is not empty!)
}

/*
* Adds a new item to the stack
*/
void push(stack s, void* i) {
	// TODO: implement this by setting the appropriate element array position to i and adjust the counter (only if the stack is not full!)
}
