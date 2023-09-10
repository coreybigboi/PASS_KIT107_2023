#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
	
	// create a stack
	Stack s;
	init_stack(&s);
	
	// push some values onto the stack
	push(s, ')');
	push(s, ':');
	push(s, ' ');
	push(s, 'l');
	push(s, 'o');
	push(s, 'o');
	push(s, 'c');
	push(s, ' ');
	push(s, 's');
	push(s, 'i');
	push(s, ' ');
	push(s, 's');
	push(s, 's');
	push(s, 'a');
	push(s, 'p');

	// print out (and then pop) each value from the stack 
	while (!isEmpty(s)) {
		printf("%c", (char)top(s));
		pop(s);
	}
}