#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: the node to be checked
 * Return: 1 if it is 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
