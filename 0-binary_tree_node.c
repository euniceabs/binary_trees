#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a new binary tree node
 * @parent: a pointer to the parent node
 * @value: the value that is to be saved in the newly created node
 * Return: return a pointer to the newly created node, or NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newly_created_node = NULL;

	newly_created_node = malloc(sizeof(binary_tree_t));
		if (newly_created_node == NULL)
			return (NULL);

		newly_created_node->n = value;
		newly_created_node->parent = parent;
		newly_created_node->left = NULL;
		newly_created_node->right = NULL;
		return (newly_created_node);
}
