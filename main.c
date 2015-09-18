#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "binarytree.h"
#include "problems.h"
#include "tests.h"
#include "t.h"

static const int NUM_TESTS = 15;

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

static char *test_problem4() { return 0; }
static char *test_problem5() { return 0; }
static char *test_problem6() { return 0; }
static char *test_problem7() { return 0; }
static char *test_problem8() { return 0; }
static char *test_problem9() { return 0; }
static char *test_problem10() { return 0; }
static char *test_problem11() { return 0; }
static char *test_problem12() { return 0; }
static char *test_problem13() { return 0; }
static char *test_problem14() { return 0; }
static char *test_problem15() { return 0; }

static char *all_tests()
{
	static char *(*tests[NUM_TESTS]) (void) = {
		test_problem1, test_problem2, test_problem3,
		test_problem4, test_problem5, test_problem6,
		test_problem7, test_problem8, test_problem9,
		test_problem10, test_problem11, test_problem12,
		test_problem13, test_problem14, test_problem15
	};

	for (int i = 0; i < NUM_TESTS; ++i)
		t_run_test(tests[i]);

	return 0;
}
