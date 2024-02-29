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
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to the node to find sibling of
 * Return: pointer to the sibling, else NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *n1, *n2;

	if (!node || !node->parent)
		return (NULL);

	n1 = node->parent->left;
	n2 = node->parent->right;

	if (comp(n1, node))
		return (n1);
	else if (comp(n2, node))
		return (n2);
	else
		return (NULL);
}
