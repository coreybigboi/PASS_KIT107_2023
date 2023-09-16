#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
	
	// create a list
	list l;
	init_list(&l);
	
	// add some random items and print out the list
	insertInOrder(l, 2);
	insertInOrder(l, 4);
	insertInOrder(l, 1);
	insertInOrder(l, 27);
	insertInOrder(l, 8);
	insertInOrder(l, 404);
	insertInOrder(l, 71);

	displayList(l);
}
