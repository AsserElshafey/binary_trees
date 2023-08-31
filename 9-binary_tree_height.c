#include "binary_trees.h"
/**
 * binary_tree_preorder - pre-order traversal
 * @tree: tree to traverse
 * @func: pointer to function to call for each node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	size_t left_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left_height = height(tree->left);
	}
	if (tree->right)
	{
		right_height = height(tree->right);
	}
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}