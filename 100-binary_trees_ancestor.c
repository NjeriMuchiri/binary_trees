#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the lowest ancestor
 * of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node
 * of two given nodes else NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *com, *pop;
if (first == NULL || second == NULL)
return (NULL);
if (first == second)
return ((binary_tree_t *)first);
com = first->parent, pop = second->parent;
if (first == pop || !com || (!com->parent && pop))
return (binary_trees_ancestor(first, pop));
else if (com == second || !pop || (!pop->parent && com))
return (binary_trees_ancestor(com, second));
return (binary_trees_ancestor(com, pop));
}
