#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function leads to a left
 * rotation
 *
 * @tree: points to the root of the tree
 *
 * Return: ponts to the new root once done
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *childl, *parent = tree;

	if (tree == NULL)
		return (NULL);
	childl = parent->right;
	if (!childl)
		return (tree);

	if (childl->left)
		childl->left->parent = parent;
	parent->right = childl->left;
	childl->left = parent;
	childl->parent = parent->parent;
	parent->parent = childl;

	if (childl->parent && childl->parent->left == parent)
		childl->parent->left = childl;
	else if (childl->parent)
		childl->parent->right = childl;

	return (childl);
}
