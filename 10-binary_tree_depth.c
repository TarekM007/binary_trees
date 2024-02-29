#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of a specific node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;  // Base case: tree is NULL, return depth as 0
    } else {
        size_t left_depth = binary_tree_depth(tree->left);
        size_t right_depth = binary_tree_depth(tree->right);
        return 1 + (left_depth > right_depth ? left_depth : right_depth);
    }
}
