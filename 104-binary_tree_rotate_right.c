#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function used to rotate binary tree
 * in right direction
 * @tree: points to the root node of tree
 *
 * Return: a pointer to the new root of tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *childl, *parent = tree;

	if (tree == NULL)
		return (NULL);

	childl = parent->left;
	if (childl == NULL)
		return (tree);
	if (childl->right)
		childl->right->parent = parent;
	parent->left = childl->right;
	childl->right = parent;
	childl->parent = parent->parent;
	parent->parent = childl;

	if (childl->parent && childl->parent->left == parent)
		childl->parent->left = childl;
	else if (childl->parent)
		childl->parent->right = childl;

	return (childl);
}
