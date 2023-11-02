#include "binary_trees.h"

/**
 * binary_tree_size - function to measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t left_size, right_size;

		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);

		return (1 + left_size + right_size);
	}
}
