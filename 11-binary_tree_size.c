#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_size - traverses binary tree using preorder traversal
 *
 * @tree: pointer to tree to be travesed
 * @func: pointer to the bin tree trav function
 * Return: No return value
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
