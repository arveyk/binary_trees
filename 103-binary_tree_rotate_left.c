#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 * @tree: pointer to the root of the tree
 *
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	new_root = tree->right;
	tree->right = new_root->left;
	new_root->left = tree;
	return (new_root);
}
