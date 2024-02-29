#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	if(parent == NULL)
	{
		return NULL;
	}

	*new node;
	binary_tree_t *new node = malloc(sizeof(binary_tree_t));
	if (new node == NULL)
	{
		return NULL;
	}
	new node ->value = value;
	new node ->parent = parent;
	new node ->left = parent ->left;
	new node ->right = NULL;
	
	if (parent->left != NULL)
	{
		new node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return new_node;
}

