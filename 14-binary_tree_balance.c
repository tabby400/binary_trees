#include "binary_trees.h"

/**
 * binary_tree_balance - function measures the balancing factor of tree
 * @tree: points to the root node of binary tree
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - grts height of tree
 * @tree: points to the root node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t p = 0, t = 0;

	if (tree != NULL)
	{
		p = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;
		t = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (p > t ? p : t);
	}
	return (0);
}
