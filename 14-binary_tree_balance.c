#include "binary_trees.h"

/**
 * _height - function to check the height of a tree
 * @tree: pointer to the root node
 * Return: the height of the tree
*/

int _height(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (!tree)
		return (0);

	height_l = _height(tree->left);
	height_r = _height(tree->right);

	return (1 + (height_l > height_r ? height_l : height_r));
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node
 * Return: value of balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_height(tree->left) - _height(tree->right));
}

