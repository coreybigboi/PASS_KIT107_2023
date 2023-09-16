#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Structure for a linked list node
struct node_int {
    int data;
    node next;
};

// Node is a pointer to the node_int structure 
typedef struct node_int* node;

// Structure for the ordered list ADT
struct list_int {
    node head;
};

// List is a pointer to the list_int structure
typedef struct list_int* list;

/*
* Creates a new stack node and returns a pointer to it
*/
node createNode(int data) {
    node newNode = (node)malloc(sizeof(struct node_int));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed for node.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/*
* Creates a new list and stores it into the list variable pointed to by lp
*/
void init_list(list* lp) {
    // TODO implement this function
    // 1. use malloc to allocate memory for a list_int struct and store the returned pointer in the address pointed to by lp
    // 2. initialise the "head" field of the newly created list
}

/*
* Inserts a new number to the list in ascending order
*/
void insertInOrder(list l, int data) {
    // TODO implement this function
    // 1. create node variables for the new node, the current node in the list, and the previous node in the list
    // 2. intitialise these node variables (don't forget the createNode function for initialising the new node variable!)
    // 3. traverse the list (using current and previous node) until you have found the correct spot to insert the new node
    // 4. add the new node into the list by linking the next fields of the appropriate nodes (account for whether the new node is being inserted at the front of the list or at the middle / end)
}

/*
* Prints the list elements
*/
void displayList(list l) {
    // TODO implement this function
    // 1. create / initialise a node variable to represent the current node in the list
    // 2. traverse the list and print out the data field of each node
}
