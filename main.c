#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "binarytree.h"
#include "problems.h"
#include "tests.h"
#include "t.h"

int main()
{
	char *result = all_tests();
	if (result != 0)
		printf("%s\n", result);
	return result != 0;
}

static char *test_problem1()
{
	struct node *tree = build123();

	for (int i = 1; i < 4; ++i) {
		t_assert(lookup(tree, i), "test_problem1: node not found");
	}

	free(tree->left);
	free(tree->right);
	free(tree);

	return 0;
}

static char *all_tests()
{
	t_run_test(test_problem1);
	return 0;
}
