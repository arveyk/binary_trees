#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire tree
 *
 * @tree: pointer to the root node
 * Return: No return value
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
