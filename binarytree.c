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

struct node *new_node(int data)
{
	struct node *node = malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void destroy(struct node *node)
{
	if (node == NULL)
		return;
	if (node->left != NULL)
		destroy(node->left);
	if (node->right != NULL)
		destroy(node->right);
	free(node);
}

struct node *insert(struct node *node, int data)
{
	if (node == NULL) {
		return new_node(data);
	} else {
		if (data <= node->data)
			node->left = insert(node->left, data);
		else
			node->right = insert(node->right, data);
		return node;
	}
}
