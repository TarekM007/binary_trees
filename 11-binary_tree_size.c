#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: ppointer to the root node of the tree to measure the size
 *
 * Return: size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_side, right_side;

if (tree == NULL)
	return (0);

left_side = binary_tree_size(tree->left);
right_side = binary_tree_size(tree->right);
return (left_side + right_side + 1);
}
