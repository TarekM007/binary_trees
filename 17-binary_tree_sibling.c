#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node.
 *         NULL If node is NULL or the parent is NULL
 *         NULL If node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;

	if (parent->left == node)
		return (parent->right);

	else if (parent->right == node)
		return (parent->left);
	else
		return (NULL);
}
