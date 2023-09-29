// KIT107 Lab 10: Decorated Binary Tree Node
/*
* Specification for the btnode ADT
* Author Julian Dermoudy
* Version 12/5/18
*/
 
struct dbtnode_int;
typedef struct dbtnode_int *dbtnode;

void init_dbtnode(dbtnode *n, void *o);
void setData(dbtnode n,void *o);
void setLabel(dbtnode n,int l);
void setBTLeft(dbtnode n, dbtnode l);
void setBTRight(dbtnode n, dbtnode r);
void *getData(dbtnode n);
int getLabel(dbtnode n);
dbtnode getBTLeft(dbtnode n);
dbtnode getBTRight(dbtnode n);
int showDBTNode(dbtnode n,int w);

// newly added functions
void DF_preorder(dbtnode n);
void DF_inorder(dbtnode n);
void DF_postorder(dbtnode n);