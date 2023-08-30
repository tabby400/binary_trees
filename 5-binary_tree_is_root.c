#include "binary_trees.h"

/**
 * binary_tree_is_root - function checks whether node is root
 * @node: the node to be checked
 *
 * Return: 1 if it is root node otherwise return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	return (1);
}
