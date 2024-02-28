#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure the depth of a node in a tre
 * @tree: pointer to the root node
 * Return: the depth of the node, else 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
