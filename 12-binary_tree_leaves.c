#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    int count = 0;
    if (tree->left)
        count++;
    if (tree->right)
        count++;
    else if (!tree->left && !tree->right)
        count++;
    return (count);
}
