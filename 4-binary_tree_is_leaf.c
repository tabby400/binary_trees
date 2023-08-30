#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function which checks if
 * a node is a leaf
 * @node: points to the node being checked
 *
 * Return: 1 if it os a leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right != NULL || node->left != NULL)
		return (0);
	return (1);
}
