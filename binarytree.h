// Implements a binary tree data structure and common operations on it.

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdbool.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node *new_node(int data);
void destroy(struct node *node);

bool lookup(struct node *node, int target);
struct node *insert(struct node *node, int data);

#endif
