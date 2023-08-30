#include "binary_trees.h"

/**
 * binary_tree_insert_right - function which inserts node as
 * right child of another node
 *
 * @parent: points to node to insert right child
 * @value: value to insert
 *
 * Return: pointer to right child node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightn;

	if (!parent)
		return (NULL);

	rightn = binary_tree_node(parent, value);
	if (!rightn)
	{
		return (NULL);
	}
	if (parent->right != NULL) /*if right already exists*/
	{
		rightn->right = parent->right;
		parent->right->parent = rightn;
	}
	parent->right = rightn;
	return (rightn);
}
