#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that insert node in the right
 * @parent: is a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (parent == NULL)
		return (NULL);
	right = malloc(sizeof(binary_tree_t));
	if (right == NULL)
		return (NULL);
	right->parent = parent;
	right->n = value;
	right->left = NULL;
	right->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = right;
	}
	else
	{
		parent->right->parent = right;
		right->right = parent->right;
		parent->right = right;
		return (right);
	}
	return (right);
}
