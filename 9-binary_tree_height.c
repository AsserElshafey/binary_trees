#include "binary_trees.h"
/**
 * binary_tree_preorder - pre-order traversal
 * @tree: tree to traverse
 * @func: pointer to function to call for each node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height;
	size_t left_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = height(node->left);
	right_height = height(node->right);
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
