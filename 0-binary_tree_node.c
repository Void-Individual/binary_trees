#include "binary_trees.h"
/**
 * binary_tree_node - function to create a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, else NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		new_node->parent = parent;
		parent = new_node;
	}
	else
		new_node->parent = NULL;

	return (new_node);
}
