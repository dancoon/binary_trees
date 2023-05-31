#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as the left child of another node
 * @parent: parent node
 * @value: value of the right child
 * Return: pointer to the node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
