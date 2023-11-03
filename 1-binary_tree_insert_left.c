#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a left child node
 *
 * @parent: parent node
 * @value: value to be given to left child
 *
 * Return: pointer to the left child created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_left = NULL;

	if (parent == NULL)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = parent->left;
	new_left->right = NULL;
	parent->left = new_left;
	if (new_left->left)
		new_left->left->parent = new_left;
	return (new_left);
}
