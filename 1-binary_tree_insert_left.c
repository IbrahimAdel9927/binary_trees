#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer.
 * @value: The value.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ne;

	if (parent == NULL)
		return (NULL);

	ne = binary_tree_node(parent, value);
	if (ne == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		ne->left = parent->left;
		parent->left->parent = ne;
	}
	parent->left = ne;

	return (ne);
}
