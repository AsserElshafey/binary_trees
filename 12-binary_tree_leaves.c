#include "binary_trees.h"
/**
 * binary_tree_leaves - finding leaves of the binary tree
 * @tree: root of the tree
 * Return: leaves of binary tree, 0 on null or failure
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves == 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		leaves++;
	}
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
