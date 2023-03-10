#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *right_child  = binary_tree_node(parent, value);
	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (right_child == NULL)
		{
			return (NULL);
		}
		else
		{
		    if (parent->right == NULL)
		    {
			    parent->right = right_child;
		    }
		    else
		    {
			    right_child->right = parent->right;
			    parent->right->parent = right_child;
			    parent->right = right_child;
		    }
		}
	}
	return (right_child);
}

