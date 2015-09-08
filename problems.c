#include "problems.h"

#include "binarytree.h"

/* problem 1 */
struct node *build123()
{
	struct node *one = new_node(1);
	struct node *two = new_node(2);
	struct node *three = new_node(3);

	two->left = one;
	two->right = three;

	return two;
}
