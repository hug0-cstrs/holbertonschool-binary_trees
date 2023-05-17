#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * height - Function to calculate 
 * the height of a binary tree
 * @tree: the node
 * Return: Always 0 (Success)
 */


int height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    int left_height = height(tree->left);
    int right_height = height(tree->right);
    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: the node
 * Return:  measures the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    int left_height = height(tree->left);
    int right_height = height(tree->right);
    return left_height - right_height;
}
