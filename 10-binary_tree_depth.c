#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_depth - Measures the depth of a node in a binary tree.
=======
 * binary_tree_depth - function to measures the depth of a node
 * in a binary tree.
>>>>>>> 7db5edebfab1e643bd2385815c52ea008c6c3026
 * @tree: Pointer to the node to measure the depth.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
