#include "binary_trees.h"
/**
 * binary_tree_nodes- counts the leaves in a binary tree
 * @tree: the tree
 * Return: number
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 +
		binary_tree_nodes(tree->right));
}

