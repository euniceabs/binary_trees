#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts a node as
 * the right-child of a parent node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to save the node in.
 *
 * Return: pointer to the newly created binary tree node or NULL if failed
 * or if the parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newly_created_node;

	if (parent == NULL)
		return (NULL);

	newly_created_node = binary_tree_node(parent, value);
	if (newly_created_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newly_created_node->right = parent->right;
		parent->right->parent = newly_created_node;
	}
	parent->right = newly_created_node;
	return (newly_created_node);
}
