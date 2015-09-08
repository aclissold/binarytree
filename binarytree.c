#include "binarytree.h"

#include <stdio.h>
#include <stdlib.h>

bool lookup(struct node *node, int target)
{
	if (node == NULL) {
		return false;
	} else {
		if (target == node->data) {
			return true;
		} else {
			if (target < node->data)
				return lookup(node->left, target);
			else
				return lookup(node->right, target);
		}
	}
}

struct node* NewNode(int data)
{
	struct node *node = malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

struct node* insert(struct node *node, int data)
{
	if (node == NULL) {
		return NewNode(data);
	} else {
		if (data <= node->data)
			node->left = insert(node->left, data);
		else
			node->right = insert(node->right, data);
		return node;
	}
}
