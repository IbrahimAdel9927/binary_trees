#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 *
 * @parent: A pointer.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ne;

	if (parent == NULL)
		return (NULL);

	ne = binary_tree_node(parent, value);
	if (ne == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		ne->right = parent->right;
		parent->right->parent = ne;
	}
	parent->right = ne;

	return (ne);
}
