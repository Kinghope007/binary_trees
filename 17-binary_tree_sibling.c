#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling od a node in a binary tree.
 * @node: A pointer to the nodde find the sibling.
 * Return: A pointer to the sibling node or NULL if not found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
