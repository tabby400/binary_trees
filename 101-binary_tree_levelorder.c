#include "binary_trees.h"

/**
 * binary_tree_levelorder - function goes over a tree using
 * level order traversal
 *
 * @tree: pointer to the root node traversed
 * @func: points to the function calling for evry node
 *
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int len = 1;
	int height = 0;

	if (tree == NULL || !func)
		return;
	height = binary_tree_height_au(tree) + 1;

	while (len <= height)
	{
		print_level(tree, len, func);
		len++;
	}
}

/**
 * print_level -function prints levels
 * @level: level
 * @func: poins to node
 * @tree: points to levels and nodes
 *
 * Return: Nothing
 */

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}

}

/**
 * binary_tree_height_au - height of tree
 * @tree: the tree itself
 *
 * Return:the tree
 */
size_t binary_tree_height_au(const binary_tree_t *tree)
{
	size_t hrigt = 0, hleft = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		hleft = 1 + binary_tree_height_au(tree->left);
	if (tree->right)
		hrigt = 1 + binary_tree_height_au(tree->right);
	if (hleft > hrigt)
		return (hleft);
	return (hrigt);
}

