#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function that performs a left rotation
 * on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *rotat, *tmp;
if (!tree || !tree->right)
return (NULL);
rotat = tree->right;
tmp = rotat->left;
rotat->left = tree;
tree->right = tmp;
if (tmp != NULL)
tmp->parent = tree;
tmp = tree->parent;
tree->parent = rotat;
rotat->parent = tmp;
if (tmp != NULL)
{
if (tmp->left == tree)
tmp->left = rotat;
else
tmp->right = rotat;
}
return (rotat);
}
