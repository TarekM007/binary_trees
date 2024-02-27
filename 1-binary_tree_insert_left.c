#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	binary_tree_t *left_child = parent->left;

	node->n = value;
	node->parent = parent;
	node->left = left_child;
	node->right = NULL;

	parent->left = node;

	if (left_child != NULL)
	{
		left_child->parent = node;
	}

	return (node);
}
