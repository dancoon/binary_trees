/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a binary tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->leftt);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
