#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t))
		if (new_node == NULL)
		{
			return (NULL);
		}

	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	parent->left = new_node;
}
