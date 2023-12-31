#include "binary_trees.h"
/**
 * binary_tree_size - size of the binary tree
 * @tree: root of the tree
 * Return: size of binary tree, 0 on null or failure
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
	{
		return (0);
	}
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
