#include "problems.h"

#include <stdlib.h>

#include "binarytree.h"

/* problem 1 */
struct node *build123()
{
	/* version a
	struct node *one = new_node(1);
	struct node *two = new_node(2);
	struct node *three = new_node(3);

	two->left = one;
	two->right = three;

	return two;
	*/

	/* version b
	struct node *tree = new_node(2);
	tree->left = new_node(1);
	tree->right = new_node(3);

	return tree;
	 */

	/* version c */
	struct node *tree = NULL;
	tree = insert(tree, 2);
	tree = insert(tree, 1);
	tree = insert(tree, 3);

	return tree;
}

/* problem 2 */
int size(struct node *node)
{
	if (node == NULL)
	    return 0;
	else
	    return 1 + size(node->left) + size(node->right);
}
