#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right child
 * of another child
 * @parent: pointer to the node to nsert the left child in
 * @value: value to store in the node
 * Return: A pointer to the created node or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->parent = parent;
new->n = value;
new->left = NULL;
new->right = parent->right;
if (parent->right != NULL)
parent->right->parent = new;
parent->right = new;
return (new);
}
