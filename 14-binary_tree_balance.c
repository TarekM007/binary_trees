#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a specific node in a binary tree
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height_b(tree->left);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height_b(tree->right);

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: int value or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = 0;
	int right_height = 0;

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height_b(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height_b(tree->right);
	}
	return (left_height - right_height);
}
