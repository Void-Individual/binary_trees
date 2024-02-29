#include "binary_trees.h"

/**
 * comp - function to compare the addresses of 2 nodes
 * @n1: node 1
 * @n2: node 2
 * Return: 0 if they are the same, else 1
*/

int comp(binary_tree_t *n1, binary_tree_t *n2)
{
	if (n1 || n2)
		if (n1 != n2)
			return (1);

	return (0);
}

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, else null
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *n1, *n2;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	n1 = node->parent->parent->left;
	n2 = node->parent->parent->right;

	if (comp(node->parent, n1))
		return (n1);
	if (comp(node->parent, n2))
		return (n2);

	return (NULL);
}
