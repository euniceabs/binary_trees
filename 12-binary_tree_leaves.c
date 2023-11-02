#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  a function that checks if a node is a leaf.
 * @node: is a pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if(!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));}
