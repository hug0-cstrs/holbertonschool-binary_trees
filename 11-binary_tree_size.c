#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;
    } else {
        return(binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
    }
}

