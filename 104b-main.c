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
	root->left = _binary_tree_node(root, 90);
	root->left->left = _binary_tree_node(root->left, 80);
	root->left->right = _binary_tree_node(root->left, 95);

	binary_tree_print(root);

	root = binary_tree_rotate_right(root);

	binary_tree_print(root);
	_binary_tree_delete(root);
	return (0);
}
