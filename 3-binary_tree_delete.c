#include "binary_trees.h"

/**
 * binary_tree_delete - function which deletes entire binary tree
 *
 * @tree: points to the root node of binary tree
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left); /*recursive call*/
		binary_tree_delete(tree->right);
		free(tree);
	}
}
