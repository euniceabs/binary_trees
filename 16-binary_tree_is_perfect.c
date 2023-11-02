#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_size, right_size;

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	// Calculate the expected number of nodes in a perfect tree
	power = (size_t)pow(2, height + 1) - 1;

	return (power == nodes);
}
