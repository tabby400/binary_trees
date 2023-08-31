#include "binary_trees.h"

/**
 * binary_tree_sibling - function ussed to find the sibling of a node
 *
 * @node: points to the node we are finding sibling of
 * Return: if node is NULL or no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
