#include "binary_trees.h"


void print_current_l(binary_tree_t *tr, size_t lvl)
{
	if (tr == NULL)
		return;
	if (lvl == 1)
		printf("%d ", tr->n);
	else if (lvl > 1)
	{
		print_current_l(tr->left, lvl - 1);
		print_current_l(tr->right, lvl - 1);
	}
}
/**
 * tree_height - calculate height of tree
 *
 * @tr: pointer to root of tree
 * Return: Height of tree
 */
size_t tree_height(binary_tree_t *tr)
{

	size_t sizel;
	size_t sizer;

	if (tr ==  NULL)
		return (0);
	sizel = tree_height(tr->left);
	sizer = tree_height(tr->right);
	if (sizel > sizer)
		return (sizel + 1);
	return (sizer + 1);
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t hgt = tree_height(root);
	size_t lvl;
	for (lvl = 1; lvl <= hgt; lvl++)
		print_current_l(root, lvl);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);

	func(tree->n);
}
