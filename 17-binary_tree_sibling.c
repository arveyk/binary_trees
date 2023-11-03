#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer whose sibling is to be found
 * Return: pointer to the sibling, NULL if cannot be found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent);
	}
	else if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	return (NULL);
}
