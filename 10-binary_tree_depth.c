#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - measures the depth of a tree
 *
 * @tree: pointer to the tree root whse height is to be determined
 * Return: depth measured
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	binary_tree_t *trav = (binary_tree_t *)tree;
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	else
		while (trav->parent != NULL)
		{
			depth++;
			trav = trav->parent;
		}
	return (depth);
}
