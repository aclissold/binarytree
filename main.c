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

	destroy(tree);

	return 0;
}

static char *test_problem2()
{
	struct node *three = build123();
	struct node *one = new_node(0);
	struct node *five = new_node(1);
	insert(five, 2);
	insert(five, 3);
	insert(five, 4);
	insert(five, 5);

	char *message = "test_problem2: incorrect size";
	t_assert(size(three) == 3, message);
	t_assert(size(one) == 1, message);
	t_assert(size(five) == 5, message);

	destroy(three);
	destroy(one);
	destroy(five);

	return 0;
}

static char *test_problem3()
{
	struct node *empty = NULL;
	char *message = "test_problem3: incorrect depth";
	t_assert(max_depth(empty) == 0, message);

	struct node *tree = new_node(1);
	t_assert(max_depth(tree) == 1, message);
	insert(tree, 0);
	t_assert(max_depth(tree) == 2, message);
	insert(tree, 2);
	t_assert(max_depth(tree) == 2, message);
	insert(tree, 3);
	t_assert(max_depth(tree) == 3, message);

	return 0;
}

static char *all_tests()
{
	t_run_test(test_problem1);
	t_run_test(test_problem2);
	t_run_test(test_problem3);
	return 0;
}
