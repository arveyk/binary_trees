#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
binary_tree_t *_binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = _binary_tree_node(NULL, 98);
	root->right = _binary_tree_node(root, 110);
	root->right->right = _binary_tree_node(root->right, 120);

	binary_tree_print(root);

	root = binary_tree_rotate_left(root);

	binary_tree_print(root);
	_binary_tree_delete(root);
	return (0);
}
