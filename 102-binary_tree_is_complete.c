#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>


/**
 * high - recursive function to get height
 *
 * @tree2: pointer to tree
 * Return: height of tree
 */
size_t high(binary_tree_t *tree2)
{
	size_t lft;
	size_t rgt;

	if (tree2 == NULL)
		return (0);
	rgt = high(tree2->right);
	lft = high(tree2->left);
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
	height = high(t2);
	return (height - 1);
}

/**
 * binary_tree_size - traverses binary tree using preorder traversal
 *
 * @tree: pointer to tree to be travesed
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


