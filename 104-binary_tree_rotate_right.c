#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 * @tree: pointer to the root of the tree
 *
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);
	new_root = tree->left;
	if (new_root == NULL)
		return (tree);
	tree->left = new_root->right;
	new_root->right = tree;
	return (new_root);
}
