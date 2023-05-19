#include "binary_trees.h"

/**
 * binary_tree_nodes - Binary tree node
 * @tree: the node
 * Return: the number of nodes in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;

	if (tree == NULL)
	{
		return (0);
	}

	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + count_left + count_right);
	}
	else
	{
		return (count_left + count_right);
	}
}
