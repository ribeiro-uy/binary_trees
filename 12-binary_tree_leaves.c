#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: Number of leaves or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);
	leaves += binary_tree_is_leaf(tree);
	return (leaves);
}
