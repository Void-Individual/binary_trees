#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * one child in a tree
 * @tree: pointer to the root node
 * Return: number if nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (nodes);

	if (tree->left)
		nodes += binary_tree_nodes(tree->left);

	if (tree->right)
		nodes += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		nodes++;

	return (nodes);
}
