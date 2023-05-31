#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves in abinary tree
 * @tree: root node of the tree
 * Return: size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
