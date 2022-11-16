#include "binary_trees.h"



void sub_BT_delete(binary_tree_t *tree)
{
    binary_tree_t *leftBuffer = tree->left, *rightBuffer = tree->right;


    if (leftBuffer)
    {
        sub_BT_delete(tree->left);
        free(tree->left);
        tree->left = NULL;
    }
    if (rightBuffer)
    {
        sub_BT_delete(tree->right);
        free(tree->right);
        tree->right = NULL;
    }
}

void binary_tree_delete(binary_tree_t *tree)
{
    sub_BT_delete(tree);
    free(tree);
    

    
}