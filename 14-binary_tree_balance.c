#include "binary_trees.h"

/**
 * high - recursive function to get height
 *
 * @tree2: pointer to tree
 * Return: height of tree
 */
int high(binary_tree_t *tree2)
{
	int lft;
	int rgt;

	if (tree2 == NULL)
		return (0);
	rgt = high(tree2->right);
	lft = high(tree2->left);
	if (lft > rgt)
		return (lft + 1);
	return (rgt + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a tree
 *
 * @tree: pointer to the tree root whse height is to be determined
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	binary_tree_t *t2 = (binary_tree_t *)tree;
	int height = 0;
	int height2 = 0;

	if (tree == NULL)
		return (0);
	height = high(t2->left);
	height2 = high(t2->right);
	return (height - height2);
}
