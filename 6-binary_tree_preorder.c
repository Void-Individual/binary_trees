#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a
 * binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function to call on each node
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);

}
