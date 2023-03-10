#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child  = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
	{
		return NULL;
	}
	else
	{
		if(left_child == NULL)
		{
			return NULL;
		}
		else
		{
			left_child = binary_tree_node(parent->left,value);
		}
	}
}
