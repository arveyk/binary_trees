#include "binary_trees.h"

/**
 * deep - recursive function to get depth
 *
 * @tree2: pointer to tree
 * Return: depth of tree
 */
size_t deep(binary_tree_t *tree2)
{
	size_t lft;
	size_t rgt;

	if (tree2 == NULL)
		return (0);
	rgt = deep(tree2->right);
	lft = deep(tree2->left);
	if (lft > rgt)
		return (lft + 1);
	return (rgt + 1);
}

/**
 * binary_tree_height - measures the height of a tree
 *
 * @tree: pointer to the tree root whse height is to be determined
 * Return: height measured
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	binary_tree_t *t2 = (binary_tree_t *)tree;
	size_t height = 0;

	if (tree == NULL)
		return (0);
	height = deep(t2);
	return (height - 1);
}
