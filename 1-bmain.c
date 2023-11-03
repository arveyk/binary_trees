#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t root;

	root.n = 98;
	root.parent = NULL;
	root.left = NULL;
	root.right = NULL;
	binary_tree_insert_left(&root, 54);

	binary_tree_print(&root);
	_binary_tree_delete(root.left);
	return (0);
}
