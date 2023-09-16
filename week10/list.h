#ifndef LIST_H
#define LIST_H

#include <stdbool.h>

struct node_int;
typedef struct node_int* node;

struct list_int;
typedef struct list_int* list;

void init_list(list* lp);
void insertInOrder(list l, int data);
void displayList(list l);

#endif //List_H