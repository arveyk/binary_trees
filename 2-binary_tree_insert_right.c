#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a right child node
 *
 * @parent: parent node
 * @value: value to be given to right child
 *
 * Return: pointer to the right child created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_right = NULL;

	if (parent == NULL)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);
	new_right->n = value;
	new_right->parent = parent;
	new_right->left = NULL;
	new_right->right = parent->right;
	parent->right = new_right;

	if (new_right->right)
		new_right->right->parent = new_right;
	return (new_right);
}
