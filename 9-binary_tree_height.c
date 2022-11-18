#include "binary_trees.h"

size_t sub_binary_tree_height(const binary_tree_t *tree, size_t size)
{
    if (tree)
        sub_binary_tree_height(tree->left, size);
    return size;
}

size_t binary_tree_height(const binary_tree_t *tree)
{
    return sub_binary_tree_height(tree, 0);
}