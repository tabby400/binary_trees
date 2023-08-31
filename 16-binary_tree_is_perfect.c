#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree);
const binary_tree_t *find_leaf(const binary_tree_t *tree);
size_t depth(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);
int recursive_perfect(const binary_tree_t *tree,
						size_t leafdpth, size_t level);


/**
 * binary_tree_is_perfect - function used to check if binary tree is perfect
 *
 * @tree: points to the root node of binary tree
 *
 * Return: 0 if the tree is NULL otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursive_perfect(tree, depth(find_leaf(tree)), 0));
}

/**
 * recursive_perfect - function recursively checks if tree is perfect
 * @level: the level of the node in the tree
 * @leafdpth: depth of a leaf in a tree
 * @tree: to the root node to be checked
 *
 * Return: 0 if not perferct, otherwise 1
 */

int recursive_perfect(const binary_tree_t *tree,
						size_t leafdpth, size_t level)
{
	if (is_leaf(tree))
		return (level == leafdpth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (recursive_perfect(tree->left, leafdpth, level + 1) &&
		recursive_perfect(tree->right, leafdpth, level + 1));
}

/**
 * find_leaf - find leaf and return
 * @tree: points to the root node
 *
 * Return: returns the leaf hat is encountered
 */

const binary_tree_t *find_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? find_leaf(tree->left) : find_leaf(tree->right));
}

/**
 * depth - function returns the depth
 * @tree: points to the root node of the tree
 *
 * Return: the depth of the node
 */

size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * is_leaf - checks if a node is a leaf in a binary tree
 * @node: points to the node to be checked
 *
 * Return: 1 if it is a leaf otherwise 0
 */

unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
