#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node of the tree
 * Return: size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, height;

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height = (left > right) ? left : right;
	return (height);
}
