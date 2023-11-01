#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_tree_postorder - traverses binary tree using preorder traversal
 *
 * @tree: pointer to tree to be travesed
 * @func: pointer to the bin tree trav function
 * Return: No return value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
