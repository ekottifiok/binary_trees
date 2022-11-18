#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * 
 * @param parent 
 * @param value 
 * @return binary_tree_t* 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newTree;

    newTree = malloc(sizeof(binary_tree_t));
    if (!newTree)
        return (NULL);
    newTree->n = value;
    newTree->parent = parent;
    newTree->left = NULL;
    newTree->right = NULL;

    return (newTree);
}