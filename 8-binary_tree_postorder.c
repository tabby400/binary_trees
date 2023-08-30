#include "binary_trees.h"

/**
 * binary_tree_postorder -function uses post order to traverse
 * @tree: points to the root node
 * @func: the function to be called with value of nodes
 * passed
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n); /* root node visited last*/
	}
}
