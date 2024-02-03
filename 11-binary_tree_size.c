#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t siz = 0;

	if (tree)
	{
		siz += 1;
		siz += binary_tree_size(tree->left);
		siz += binary_tree_size(tree->right);
	}

	return (siz);
}
