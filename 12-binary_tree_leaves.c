#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_leaves -counts the number of leaves in a binary tree
 *
 * @tree: pointer to tree to be travesed
 * Return: No return value
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (left + right + 1);
	return (left + right);
}
