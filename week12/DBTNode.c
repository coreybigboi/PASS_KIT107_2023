// KIT107 Lab 10: Decorated Binary Tree Node
/*
* Implementation for the dbtnode ADT
* Author Julian Dermoudy
* Version 12/5/18
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "DBTNode.h"


struct dbtnode_int {
	void *data;
	int label;
	dbtnode left;
	dbtnode right;
};

/*
* Initialiser
* param o value to be stored into dbtnode
*/
void init_dbtnode(dbtnode *n, void *o)
{
	*n = (dbtnode)malloc(sizeof(struct dbtnode_int));
	(*n)->data = o;
	(*n)->label = 0;
	(*n)->left = NULL;
	(*n)->right = NULL;
}

/*
* Update data field
* param o object to be stored in data field of dbtnode
*/
void setData(dbtnode n,void *o)
{
	n->data=o;
}
	/*
* Update label field
* param l int to be stored in label field of dbtnode
*/
void setLabel(dbtnode n,int l)
{
	n->label=l;
}
		
/*
* Update left field
* param n reference to be stored in left field of dbtnode
*/
void setBTLeft(dbtnode n,dbtnode l)
{
	n->left=l;
}
	
/*
* Update right field
* param n reference to be stored in right field of dbtnode
*/
void setBTRight(dbtnode n,dbtnode r)
{
	n->right=r;
}
	
/*
* Find value stored in data field
* return value stored in data field of dbtnode
*/
void *getData(dbtnode n)
{
	return n->data;
}
	
/*
* Find value stored in label field
* return value stored in label field of dbtnode
*/
int getLabel(dbtnode n)
{
	return n->label;
}
	
/*
* Find value stored in left field
* return value stored in left field of dbtnode
*/
dbtnode getBTLeft(dbtnode n)
{
	return n->left;
}
		
/*
* Find object stored in right field
* return value stored in right field of dbtnode
*/
dbtnode getBTRight(dbtnode n)
{
	return n->right;
}

/*
* Perform pretty-printing of decorated binary tree node
* param w current distance from left-hand edge of screen (in characters)
* return accumulated distance from left-hand edge of screen
*/
int showDBTNode(dbtnode n,int w)
{
	char *s;	// node value to display 
	int l;		// label indicating how much indentation to apply
	int i;
		
	s=(char *)getData(n);
	l=getLabel(n);
		
	//indent 3 spaces for each 'missing' node from current place (w) on line
	for (i=w; i<(l-1)*3; i++)
	{
		// add "   " for each node on the left of this one
		printf(" ");
	}
		
	// display the node contents
	printf("%s",s);
		
	// we've now moved right this many characters
	return (l-1)*3+1;
}

/*
* Prints out the binary tree nodes in Depth-First Pre-Order
*/
void DF_preorder(dbtnode n) {
	//TODO: Complete this function. Hint: Use recursion!
}

/*
* Prints out the binary tree nodes in Depth-First In-Order
*/
void DF_inorder(dbtnode n) {
	//TODO: Complete this function. Hint: Use recursion!
}

/*
* Prints out the binary tree nodes in Depth-Fist Post-Order
*/
void DF_postorder(dbtnode n) {
	//TODO: Complete this function. Hint: Use recursion!
}
