#include "binary_trees.h"

/**
 * recursive_full -function checks recursively if tree is full
 * @tree: points to the root node
 *
 * Return: 1 if tree is full otherwise 0
 */

int recursive_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			recursive_full(tree->left) == 0 ||
			recursive_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full -checks if binary tree is full
 * @tree: points to root node
 *
 * Return: 0 if tree is NULL or not full, otherwise
 * returns 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_full(tree));
}
