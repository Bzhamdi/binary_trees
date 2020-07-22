#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that insert node in the left
 * @parent: is a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (parent == NULL)
		return (NULL);
	left = malloc(sizeof(binary_tree_t));
	if (left == NULL)
		return (NULL);
	left->parent = parent;
	left->n = value;
	left->left = NULL;
	left->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = left;
	}
	else
	{
		parent->left->parent = left;
		left->left = parent->left;
		parent->left = left;
		return (left);
	}
	return (left);
}
