#include <stdio.h>
#include <stdbool.h>

#include "binarytree.h"

int present(struct node *node, int target)
{
	if (node == NULL) {
		return false;
	} else {
		if (target == node->data) {
			return true;
		} else {
			if (target < node->data)
				return present(node->left, target);
			else
				return present(node->right, target);
		}
	}
}
