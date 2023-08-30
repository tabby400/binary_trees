#include "binary_trees.h"

/**
 * binary_tree_size - function finds and measures size of
 * binary tree
 *
 * @tree: points to root node of tree
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizetr = 0;

	if (tree)
	{
		sizetr = sizetr + 1;
		sizetr += binary_tree_size(tree->left);
		sizetr += binary_tree_size(tree->right);
	}
	return (sizetr);
}
