#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses the binary tree in level-order and
 * calls the given function for each node, passing the node's value as a
 * parameter to the function.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front, rear;
	binary_tree_t **queue;

	if (tree == NULL || func == NULL)
		return;
	queue = malloc(sizeof(binary_tree_t *) *
			binary_tree_height(tree));
	if (queue == NULL)
		return;

	front = 0, rear = 0;
	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);
		if (current->left != NULL)
			queue[rear++] = current->left;

		if (current->right != NULL)
			queue[rear++] = current->right;
	}

	free(queue);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lheight = 0, rheight = 0;

		lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lheight > rheight) ? lheight : rheight);
	}
	return (0);
}
