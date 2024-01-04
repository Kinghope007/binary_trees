#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binayr tree.
 * @tree: pointer to the node to measure the depth.
 * Return: if tree is NULL, function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
