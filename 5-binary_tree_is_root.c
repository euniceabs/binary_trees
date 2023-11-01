#include "binary_trees.h"

/**
 * binary_tree_is_root - This function checks if a given node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a root, 0 if otherwise and if node is NULL,return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
