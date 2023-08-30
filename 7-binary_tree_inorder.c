#include "binary_trees.h"

/**
 * binary_tree_inorder - function used to traverse binary tree
 * inorder
 *
 * @tree: points to root node
 * @func: points to a func calling nodes
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
