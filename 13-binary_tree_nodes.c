#include "binary_trees.h"
/**
 * binary_tree_nodes - finding number of nodes  of the binary tree
 * @tree: root of the tree
 * Return: leaves of binary tree, 0 on null or failure
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (((tree->left) == NULL) || ((tree->right) == NULL))
	{
		nodes++;
	}
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
