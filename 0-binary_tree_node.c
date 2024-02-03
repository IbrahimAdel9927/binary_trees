#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer.
 * @value: The value.
 *
 * Return: If it fails - NULL else - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ne;

	ne = malloc(sizeof(binary_tree_t));
	if (ne == NULL)
		return (NULL);

	ne->n = value;
	ne->parent = parent;
	ne->left = NULL;
	ne->right = NULL;

	return (ne);
}
