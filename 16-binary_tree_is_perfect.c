#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary
 * tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect, else 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));

	return (0);

}
