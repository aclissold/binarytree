#ifndef BINARYTREE_H
#define BINARYTREE_H

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int present(struct node *node, int target);

#endif
