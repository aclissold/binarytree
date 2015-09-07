#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "binarytree.h"

int main()
{
	struct node tree = {
		.data = 1,
		.left = NULL,
		.right = NULL,
	};

	bool haszero = present(&tree, 0);
	bool hasone = present(&tree, 1);

	assert(!haszero);
	assert(hasone);

	return 0;
}
