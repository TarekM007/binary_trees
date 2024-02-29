#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a specific node in a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	size_t left_side = binary_tree_height(tree->left);
	size_t right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
	{
		return (left_side + 1);
	}
	else
		return (right_side + 1);
}
