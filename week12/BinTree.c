// KIT107 Slide 152: Binary Tree
/*
* Implementation for the bintree ADT
* Author Julian Dermoudy
* Version 26/9/2022
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "DBTNode.h"


struct bintree_int {
	dbtnode root;
};

/*
* Initialiser
* param e indicates whether to create an empty tree (true) or a leaf (false)
* param o object to put in leaf node (ignored if tree is to be empty)
*/
void init_bintree(bintree *t,bool e,void *o)
{
	dbtnode n;

	*t=(bintree)malloc(sizeof(struct bintree_int));
	if (e)
	{
		// empty tree
		(*t)->root=NULL;
	}
	else
	{
		// leaf node
		init_dbtnode(&n,o);
		(*t)->root=n;
	}
}

/*
* Check for emptiness
* return true if binary tree is empty, false otherwise
*/
bool isEmpty(bintree t)
{
	return (t->root == NULL);
}

/*
* Find root value in binary tree
* return object at root of binary tree
*/
void *getRootData(bintree t)
{
	if (isEmpty(t))
	{
		fprintf(stderr, "Cannot examine data from empty tree.");
		exit(1);
	}
		
	return getData(t->root);
}
	
/*
* Find reference to left sub-tree of binary tree
* return reference to left of binary tree
*/
bintree getLeft(bintree t)
{  
	bintree l;

	if (isEmpty(t))
	{
		fprintf(stderr, "Cannot examine data from empty tree.");
		exit(1);
	}

	init_bintree(&l,true,NULL);
	l->root=getBTLeft(t->root);

	return l;
}
	
/*
* Find reference to right sub-tree of binary tree
* return reference to right of binary tree
*/
bintree getRight(bintree t)
{
	bintree r;

	if (isEmpty(t))
	{
		fprintf(stderr, "Cannot examine data from empty tree.");
		exit(1);
	}

	init_bintree(&r,true,NULL);
	r->root = getBTRight(t->root);

	return r;
}

/*
* Update data field of root node
* param o object to be stored in data field of root node
*/
void setRootData(bintree t,void *o)
{
	if (isEmpty(t))
	{
		fprintf(stderr, "Cannot set data in an empty tree.");
		exit(1);
	}

	setData(t->root,o);
}
	
/*
* Update left field of root node
* param l reference to binary tree to be inserted as left branch of root node
*/
void setLeft(bintree t,bintree l)
{
	if (isEmpty(t))
	{
		fprintf(stderr, "Cannot set data in empty tree.");
		exit(1);
	}

	setBTLeft(t->root,l->root);
}
	
/*
* Update right field of root node
* param r reference to binary tree to be inserted as right branch of root node
*/
void setRight(bintree t, bintree r)
{
	if (isEmpty(t))
	{
		fprintf(stderr, "Cannot set data in empty tree.");
		exit(1);
	}

	setBTRight(t->root, r->root);
}

/*
* Perform breadth-first traversal to pretty-print specific level of binary tree
* param n number of level to be processed (root level is 1)
* param w current distance from left-hand edge of screen (in characters)
* return accumulated distance from left-hand edge of screen (in characters)
*/
int showLevel(bintree t, int n, int w)
{
	bintree l;	// left sub-tree
	bintree r;	// right sub-tree
		
	if (!isEmpty(t))
	{	
		if (n==1)
		{
			// this is the level we want so display the node
			w=showDBTNode(t->root,w);
		}
		else
		{
			// this isn't the level we want, so keep going down...
			l=getLeft(t);
			r=getRight(t);
			w=showLevel(l,n-1,w);
			w=showLevel(r,n-1,w);
		}
	}
	
	return w;
}	

/*
* Perform breadth-first traversal to pretty-print binary tree
*/
void showTree(bintree t)
{
	int i;

	if (! isEmpty(t))
	{
		// label each node with its left-to-right number starting at 1
		decorate(t,1);

		//display the tree one level at a time with blank space
		for (i=1; i<=height(t); i++)
		{
			// pretty-print level i starting 0 characters from left-hand edge
			showLevel(t,i,0);
			printf("\n");
		}
	}
		
}
	
/*
* Decorate each node in the tree with its left-to-right node number (label)
* param n latest numeric label assigned to a node (i.e. starting point)
* return last label number assigned

*/
int decorate(bintree t,int n)
{
	bintree l;	// left sub-tree
	bintree r;	// right sub-tree
		
	// if tree isn't empty
	if (!isEmpty(t))
	{
		// get left sub-tree
		l=getLeft(t);
		// get right sub-tree
		r=getRight(t);

		// decorate left sub-tree
		n=decorate(l,n);
			
		// label current node
		setLabel(t->root,n);
		// increment label variable n
		n++;

		// decorate right sub-tree
		n=decorate(r,n);
	}
		
	// return next label value to be used, n
	return n;
}
	
/*
* Find height of binary tree (empty tree has height 0)
* return height of binary tree as int
*/
int height(bintree t)
{
	bintree l;	// left sub-tree
	bintree r;	// right sub-tree
	int lh;	// height of left sub-tree
	int rh;	// height of right sub-tree
		
	// if tree is empty
	if (isEmpty(t))
	{
		// height is 0, return it
		return 0;
	}
	else
	{
		// otherwise...
		// get left sub-tree
		l=getLeft(t);
		// get right sub-tree
		r=getRight(t);	
		// calculate height of left sub-tree
		lh=height(l);
		// calculate height of right sub-tree
		rh=height(r);
		// if the height of the left sub-tree exceeds the height of the right
		if (lh>rh)
		{
			// height is height of the left sub-tree plus 1, return it
			return 1+lh;
		}
		else
		{
			// otherwise...
			// height is height of the right sub-tree plus 1, return it
			return 1+rh;
		}
	}
}

/*
* Prints out the binary tree in Depth-First Pre-Order
*/
void showTree_DF_preorder(bintree b) {
	// TODO: Complete this function by calling the DF_preorder function on the tree's root node **if** the tree is not empty 
}

/*
* Prints out the binary tree in Depth-First In-Order
*/
void showTree_DF_inorder(bintree b) {
	// TODO: Complete this function by calling the DF_inorder function on the tree's root node **if** the tree is not empty 
}

/*
* Prints out the binary tree in Depth-First Post-Order
*/
void showTree_DF_postorder(bintree b) {
	// TODO: Complete this function by calling the DF_postorder function on the tree's root node **if** the tree is not empty 
}
