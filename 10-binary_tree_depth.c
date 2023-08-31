#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node in the tree
 * @tree: root node of the tree
 * Return: depth of binary tree, 0 on null or failure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
	{
		depth += 1 + binary_tree_depth(tree->parent);
	}

	return (depth);
}
