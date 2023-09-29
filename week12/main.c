// KIT017 Lab 10: Driver file
/**
 * Harness class for Lab 10
 * author Julian Dermoudy
 * version 12/5/18
 */

#include <stdio.h>
#include "BinTree.h"

int main(int argc, char *argv[])
{
	bintree t;
	bintree x,y,z;
		
	init_bintree(&t,false,"A");
	printf("Installing A as the root...\n");
	init_bintree(&x,false,"B");		
	printf("Installing B as A's left branch...\n");
	setLeft(t,x);

	init_bintree(&y,false,"C");
	printf("Installing C as A's right branch...\n");
	setRight(t,y);
		
	init_bintree(&z,false,"F");
	printf("Installing F as C's right branch...\n");
	setRight(y,z);
		
	init_bintree(&y,false,"D");
	printf("Installing D as B's left branch...\n");
	setLeft(x,y);

	init_bintree(&z,false,"E");
	printf("Installing E as B's right branch...\n");
	setRight(x,z);
		
	init_bintree(&x,false,"G");
	printf("Installing G as E's left branch...\n");
	setLeft(z,x);

	printf("\nThe tree has %d level(s).\n\n\n",height(t));
		
	showTree(t);

	// Newly added functions

	printf("\n\nPerforming Depth-First Pre-Order Traversal:\n");
	showTree_DF_preorder(t);

	printf("\n\nPerforming Depth-First In-Order Traversal:\n");
	showTree_DF_inorder(t);

	printf("\n\nPerforming Depth-First Post-Order Traversal:\n");
	showTree_DF_postorder(t);
}

