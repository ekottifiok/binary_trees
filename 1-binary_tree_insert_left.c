#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newTree;

	if (!parent)
		return (NULL);

	newTree = binary_tree_node(parent, value);
	if (!newTree)
		return (NULL);
	if (parent->left)
	{
		newTree->left = parent->left;
		parent->left->parent = newTree;
	}
	parent->left = newTree;
	return (parent);
}
