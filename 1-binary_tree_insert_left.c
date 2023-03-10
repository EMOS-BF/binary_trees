#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * binary_tree_insert_left: function that inserts a node as the left-child of another node
 * parent: is a pointer to the node to insert the left-child
 * value: is the value to store in the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child  = binary_tree_node(parent, value);
	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (left_child == NULL)
		{
			return (NULL);
		}
		else
		{
		    if (parent->left == NULL)
		    {
			    parent->left = left_child;
		    }
		    else
		    {
			    left_child->left = parent->left;
			    parent->left->parent = left_child;
			    parent->left = left_child;
		    }
		}
	}
	return (left_child);
}

