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
	    if (parent == NULL) {
        return NULL;  // Return NULL if parent is NULL
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL;  // Failed to create the new node
    }

    binary_tree_t *left_child = parent->left;

    new_node->left = left_child;
    parent->left = new_node;

    if (left_child != NULL) {
        left_child->parent = new_node;
    }

    return new_node;
}
