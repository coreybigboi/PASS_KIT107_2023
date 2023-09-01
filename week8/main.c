#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
	
	// create a stack
	stack s;
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

	for (int i = 0; i < 15; i++) {
		char val = (char)top(s);
		printf("%c", val);
		pop(s);
	}
}