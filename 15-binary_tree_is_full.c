#include "binary_trees.h"
/**
 * full_parent - function that checks if a binary tree is full
 * recursively
 * @tree: pointer to the root node of the tree to check
 * Return: Tree not full return 0 else 1
*/
int full_parent(const binary_tree_t *tree)
{
if (tree != NULL)
{
if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL) ||
full_parent(tree->left) == 0 ||
full_parent(tree->right) == 0)
return (0);
}
return (1);
}

/**
 * binary_tree_is_full - function that checks if a binary tree
 * is full
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (full_parent(tree));
}
