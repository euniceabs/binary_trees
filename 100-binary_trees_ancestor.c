#include "binary_trees.h"

/**
 * binary_trees_ancestor - This function finds the lowest common ancestor of
 * two nodes in a binary tree.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: If a common ancestor exists, return a pointer to it.
 * Otherwise, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_parent, *second_parent;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	first_parent = first->parent;
	second_parent = second->parent;

	while (first_parent != NULL)
	{
		if (first_parent == second)
			return ((binary_tree_t *)first_parent);
		second_parent = second->parent;
		while (second_parent != NULL)
		{
			if (first_parent == second_parent)
				return ((binary_tree_t *)first_parent);
			second_parent = second_parent->parent;
		}
		first_parent = first_parent->parent;
	}
	return (NULL);
}
