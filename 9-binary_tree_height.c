#include "binary_trees.h"

/**
 * binary_tree_height - function measures height of
 * binary tree
 *
 * @tree: points to root node of the tree
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree) /*if it exists*/
	{
		size_t p = 0, t = 0;

		p = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		t = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((p > t) ? p : t);
	}
}
