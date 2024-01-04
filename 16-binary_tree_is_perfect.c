#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    // Recursively calculate the height of the left and right subtrees
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    // Return the maximum height of the left or right subtree plus 1
    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    // Calculate the height of the left and right subtrees
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    // If the heights of the left and right subtrees are not equal, the tree is not perfect
    if (left_height != right_height)
        return (0);

    // If the tree is a leaf node, it is perfect
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    // Recursively check if both the left and right subtrees are perfect
    return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
