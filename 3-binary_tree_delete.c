#include "binary_trees.h"

/**
 *  sub_BT_delete - deletes a sub_binary tree in recursive form
 *
 * @tree: the tree to be deleted
 */
void sub_BT_delete(binary_tree_t *tree)
{
	if (tree->left)
	{
		sub_BT_delete(tree->left);
		free(tree->left);
		tree->left = NULL;
	}
	if (tree->right)
	{
		sub_BT_delete(tree->right);
		free(tree->right);
		tree->right = NULL;
	}
}

/**
 * binary_tree_delete - the main entry to the function
 *
 * @tree: tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	sub_BT_delete(tree);
	free(tree);
}
