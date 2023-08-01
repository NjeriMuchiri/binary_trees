#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * factor
 * Return: 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: if tree is NULL, function must return 0
 * else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t lef = 0, righ = 0;
lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
righ = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((lef > righ) ? lef : righ);
}
return (0);
}
