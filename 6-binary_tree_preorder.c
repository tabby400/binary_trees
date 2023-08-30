#include "binary_trees.h"

/**
 * binary_tree_preorder - function using preorder traversal
 *
 * @tree: points to root node of tree
 * @func: points to function to call and value passed
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n); /* value passed*/
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
