#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	*new node;
	binary_tree_t *new node = malloc(sizeof(binary_tree_t));

	if (new node == NULL)
	{
		return NULL;
	}

	new node -> value = value;
	new node -> parent = parent;
	new node -> left = NULL;
	new node -> right = NULL;

	return new node;
}
