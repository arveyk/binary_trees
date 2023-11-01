#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if a node is a leaf
 *
 * @node: the node to be checked
 * Return: 1 if it is 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	binary_tree_t *lft;
	binary_tree_t *rgt;

	if (node == NULL)
		return (0);
	if (node->right && node->left)
	{
		lft = node->left;
		rgt = node->right;

		if ((rgt->right || lft->right) || (rgt->left || lft->left))
			return (1);
	}
	return (0);
}
