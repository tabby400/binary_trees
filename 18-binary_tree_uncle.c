#include "binary_trees.h"

/**
 * binary_tree_uncle - function used to get the uncle
 * of a node
 *
 * @node: points to node to find the uncle of
 *
 * Return: NULL if node is null or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
