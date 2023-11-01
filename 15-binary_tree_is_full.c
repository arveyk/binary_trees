#include "binary_trees.h"

/**
 * check_full - recursive procedure to check if tree is full
 *
 * @tr: Pointer to root node
 * Return: 1 if true 0 if false
 */
int check_full(binary_tree_t *tr)
{
	int swch;

	if (tr == NULL)
		return (0);
	swch = check_full(tr->left);
	swch = check_full(tr->right);
	if ((tr->left && !tr->right) || (!tr->left && tr->right))
		return (swch + 1);
	return (swch);
}

/**
 * binary_tree_is_full - check if a binary tree is full
 *
 * @tree: Pointer to the root node of tree to be checked
 * Return: 1 if true 0 if not full(check_full's return value)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	binary_tree_t *trav = (binary_tree_t *)tree;

	if (tree == NULL)
		return (0);
	if (check_full(trav) > 0)
		return (0);
	return (1);

}
