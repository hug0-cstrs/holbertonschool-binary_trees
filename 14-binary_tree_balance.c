#include "binary_trees.h"

/**
 * height - Function to calculate
 * the height of a binary tree
 * @tree: the node
 * Return: Always 0 (Success)
 */
int height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: the node
 * Return:  measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);
	return (left_height - right_height);
}
