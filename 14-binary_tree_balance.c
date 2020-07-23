#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the first node
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_l = 0;
	size_t size_r = 0;

	if (tree == NULL)
		return (0);
	size_l = binary_tree_height(tree->left) + 1;
	size_r = binary_tree_height(tree->right) + 1;
	if (size_l > size_r)
		return (size_l);
	else
		return (size_r);
}


/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: the first node
 * Return: the balance of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((int)(left_height - right_height));
}
