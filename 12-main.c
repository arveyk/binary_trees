#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{

	binary_tree_t *root;
	size_t leaves;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	leaves = binary_tree_leaves(root);
	printf("Leaves from  %d: %lu\n", root->n, leaves);
	leaves = binary_tree_leaves(root->right);
	printf("Leaves from  %d: %lu\n", root->right->n, leaves);
	leaves = binary_tree_leaves(root->left->right);
	printf("Leaves from  %d: %lu\n", root->left->right->n, leaves);
	return (0);
}
