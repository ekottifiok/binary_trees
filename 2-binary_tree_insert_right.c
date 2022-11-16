#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newTree;
    if (!parent)
        return (NULL);

    newTree = binary_tree_node(parent, value);
    if (!newTree)
        return (NULL);
    if (parent->right)
	{
		newTree->right = parent->right;
		parent->right->parent = newTree;
	}
    parent->right = newTree;
    return (parent);
}
