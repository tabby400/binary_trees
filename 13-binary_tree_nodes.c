#include "binary_trees.h"

/**
 * binary_tree_nodes - func counts nodes with atleast
 * one child in the tree
 *
 * @tree: points to the root node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node1 = 0;

	if (tree)
	{
		node1 += (tree->left || tree->right) ? 1 : 0;
		node1 += binary_tree_nodes(tree->left);
		node1 += binary_tree_nodes(tree->right);
	}
	return (node1);
}
