#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * the height of a binary tree
 * @tree: the node
 * Return: checks if a binary tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
    {
        return (0);
    }
    if (tree->left && tree->right && tree->parent)
    {
        return (1);
    }
    else 
    {
        return (0);
    }
}
