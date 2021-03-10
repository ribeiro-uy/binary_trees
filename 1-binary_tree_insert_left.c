#include "binary_trees.h"

/**
 * binary_tree_node - Inserts a node as the left-child of another node.
 *
 * @value:  Value to put in the new node.
 * @parent: Pointer to the parent node.
 *
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    if (parent == NULL)
        return (NULL);
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;
    if (parent->left != NULL)
    {
        new_node->parent = parent;
        new_node->left = parent->left;
        new_node->right = NULL;
        new_node->n = value;
        parent->left->parent = new_node;
        parent->left = new_node;
    }
    else
    {
        parent->left = new_node;
        new_node->parent = parent;
        new_node->n = value;
        new_node->left = NULL;
        new_node->right = NULL;
    }
    return (new_node);
}


