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

        /* use the larger one */
        if (lheight > rheight)
                return (lheight + 1);
        else
                return (rheight + 1);
}
