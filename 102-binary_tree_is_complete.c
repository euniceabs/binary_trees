#include "binary_trees.h"

/**
 * binary_tree_is_complete_recursive - this function checks if a
 * binary tree is complete.
 * @tree: A pointer to the root node of the tree to traverse.
 * @index: The index of the current node.
 * @node_count: The number of nodes in the tree.
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete_recursive(const binary_tree_t *tree,
		size_t index, size_t node_count)
{
	if (tree == NULL)

		return (1);

	if (index >= node_count)
		return (0);
	return (binary_tree_is_complete_recursive(tree->left, 2 * index + 1,
				node_count) && binary_tree_is_complete_recursive
			(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_is_complete- This function checks if a binary tree
 * is complete.
 * @tree: The root node of the binary tree.
 * Return: 1 if the tree is complete; otherwise, 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t node_count = 0;
	size_t index = 0;

	if (tree == NULL)
		return (0);
	node_count = binary_tree_size(tree);
	return (binary_tree_is_complete_recursive(tree, index, node_count));
}

/**
 * binary_tree_size - Calculate the size of a binary tree
 * using post-order traversal.
 * @tree: A pointer to the root node of the tree to measure the size of.
 * Return: The size of the tree (number of nodes), or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
