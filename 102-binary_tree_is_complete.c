#include "binary_trees.h"

/**
 * binary_tree_is_complete - function used to check if the
 * binary tree is complete
 *
 * @tree: this points to the root node
 *
 * Return: 1 when it works otherwise 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int node;
	binary_tree_t *rootn;

	if (tree == NULL)
		return (0);
	rootn = (binary_tree_t *)tree;
	node = count_nodes(rootn);

	return (complete_now(rootn, 0, node));
}

/**
 * complete_now - function checks if tree
 * is now complete
 *
 * @index: the index of the noode being looked at
 * @root: points to the root node of tree
 * @n: the number of nodes
 *
 * Return: 0 if not heap otherwise 1
 */

int complete_now(binary_tree_t *root, int index, int n)
{
	if (root == NULL)
		return (0);
	if (index >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if (root->right && !root->left)
		return (0);
	if (root->left && !root->right)
		return (complete_now(root->left, index * 2 + 1, n));
	return (complete_now(root->left, index * 2 + 1, n) &
			complete_now(root->right, index * 2 + 2, n));
}

/**
 * count_nodes - function used to count nodes
 *
 * @root: root of node
 *
 * Return: the nodes
 */

int count_nodes(binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}

