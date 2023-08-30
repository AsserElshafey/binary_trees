#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to node to be checked
 * Return: 1 if root, othewise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node) && (node->parent == 0))
	{
		return (1);
	}
	return (0);
}
