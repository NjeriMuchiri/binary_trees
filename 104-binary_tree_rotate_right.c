#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs a right rotation
 * on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *rotat, *tmp;
if (!tree || !tree->left)
return (NULL);
rotat = tree->left;
tmp = rotat->right;
rotat->right = tree;
tree->left = tmp;
if (tmp != NULL)
tmp->parent = tree;
tmp = tree->parent;
tree->parent = rotat;
rotat->parent = tmp;
if (tmp != NULL)
{
if (tmp->right == tree)
tmp->right = rotat;
else
tmp->left = rotat;
}
return (rotat);
}
