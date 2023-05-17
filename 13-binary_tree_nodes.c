#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * struct binary_tree_s - Binary tree node
 *
 * @tree: the node 
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return 0;
    }

    size_t count_left = binary_tree_nodes(tree->left);
    size_t count_right = binary_tree_nodes(tree->right);

    if (tree->left != NULL || tree->right != NULL)
    {
        return 1 + count_left + count_right;
    }
    else
    {
        return count_left + count_right;
    }
}
