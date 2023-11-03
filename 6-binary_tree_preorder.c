#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_preorder - traverses binary tree using preorder traversal
 *
 * @tree: pointer to tree to be travesed
 * @func: pointer to the bin tree trav function
 * Return: No return value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
