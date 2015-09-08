#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "binarytree.h"
#include "problems.h"

int main()
{
	struct node *tree = build123();

	for (int i = 1; i < 4; ++i)
		assert(lookup(tree, i));

	free(tree->left);
	free(tree->right);
	free(tree);

	return 0;
}
