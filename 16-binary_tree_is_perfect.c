#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height or if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: Depth or if tree is NULL, your function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y.
 *
 * @x: variable x
 * @y: variable y
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, y - 1)));
}

/**
 * binary_tree_is_perfect -Function that checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: Always 0 (Success)
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;
	int height;
	int max;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	max = _pow_recursion(2, height + 1) - 1;
	if (max == size)
		return (1);
	else
		return (0);
}
