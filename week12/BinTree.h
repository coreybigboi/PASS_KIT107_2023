// KIT107 Lab 10: BinTree
/*
* Specification for the Binary Tree ADT
* Author Julian Dermoudy
* Version 12/5/18
*/

#include <stdbool.h>

struct bintree_int;
typedef struct bintree_int *bintree;

void init_bintree(bintree *b,bool e,void *o);
bool isEmpty(bintree b);
void *getRootData(bintree b);
bintree getLeft(bintree b);
bintree getRight(bintree b);
void setRootData(bintree b,void *o);
void setLeft(bintree b,bintree l);
void setRight(bintree b,bintree r);
void showTree(bintree b);
int height(bintree t);
int decorate(bintree t,int n);

// newly added functions
void showTree_DF_preorder(bintree b);
void showTree_DF_inorder(bintree b);
void showTree_DF_postorder(bintree b);