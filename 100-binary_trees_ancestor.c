#include "binary_trees.h"

/**
 * binary_trees_ancestor - function used to get the
 * lowest common ancestor of two nodes
 *
 * @first: points the first node
 * @second: points to second node
 *
 * Return: pointer tolowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
							const binary_tree_t *second)
{
	const binary_tree_t *anc1, *anc2;

	for (anc1 = first; anc1; anc1 = anc1->parent)
		for (anc2 = second; anc2; anc2 = anc2->parent)
			if (anc1 == anc2)
				return ((binary_tree_t *)anc1);
	return (NULL);
}
