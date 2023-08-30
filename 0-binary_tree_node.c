#include "binary_trees.h"

/**
 * binary_tree_node - function used to create binary tree node
 * @value: the value to put in node created
 * @parent: points to the parent node of the node created
 *
 * This function creates a binary tree node with a value
 * and no children
 *
 * Return: pointer to node created or NULL if doesn't exist
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *created;

	created = malloc(sizeof(binary_tree_t)); /*allocate memory*/
	if (!created)
		return (NULL);

	created->n = value;
	created->parent = parent;
	created->left = NULL; /*no children*/
	created->right = NULL;

	return (created); /*pointer to new node*/
}
