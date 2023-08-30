#include "binary_trees.h"

/**
 * binary_tree_insert_left - function which inserts left child
 * node  in a node
 * @parent: points to the node to insert left node
 * @value: the value to store
 *
 * Return: points to the node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (!parent)
		return (NULL);

	leftnode = binary_tree_node(parent, value);
	if (!leftnode)
		return (NULL);

	if (parent->left != NULL) /*old left set as left chld of new node*/
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;
	return (leftnode);
}
