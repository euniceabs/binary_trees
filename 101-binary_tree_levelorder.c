#include "binary_trees.h"

/**
 * binary_tree_height - this function measures the height of a binary tree.
 *
 * @tree: A pointer to the root of the binary tree.
 * Return: The height of the tree, 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * traverse_level - this function poerforms a level-order traversal on a
 * binary tree up to a specific level.
 * @tree: The binary tree to traverse.
 * @func: A function pointer to apply to each node.
 * @target_level: The specific level within the tree to handle.
 */
void traverse_level(const binary_tree_t *tree, void (*func)(int),
		size_t target_level)
{
	if (!tree)
		return;

	if (target_level == 1)
		func(tree->n);
	else
	{
		traverse_level(tree->left, func, target_level - 1);
		traverse_level(tree->right, func, target_level - 1);
	}
}

/**
 * binary_tree_levelorder - this function performs a level-order traversa
 * on a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node's value.
 * return: If @tree or @func is NULL, the function does nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t current_level, max_level;

	if (!tree || !func)
		return;

	max_level = binary_tree_height(tree) + 1;

	for (current_level = 1; current_level <= max_level; current_level++)
		traverse_level(tree, func, current_level);
}
