#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "binarytree.h"

int main()
{
	struct node *tree = NewNode(0);

	bool haszero = lookup(tree, 0);
	bool hasone = lookup(tree, 1);

	assert(haszero);
	assert(!hasone);

	free(tree);
	free(tree);

	return 0;
}
