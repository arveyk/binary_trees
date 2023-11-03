#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to insert in node
 *
 * Return: pointer to new node on success, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	parent = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	parent->n = value;
	parent->parent = NULL;
	parent->left = NULL;
	parent->right = NULL;
	return (parent);
}
