#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_nodes -counts the number of leaves in a binary tree
 *
 * @tree: pointer to tree to be travesed
 * Return: No return value
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (left + right + 1);
	return (left + right);
}
