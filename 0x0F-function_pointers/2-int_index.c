#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index - indexes aray i think
 *@array: array to go through
 *@size: size of array
 *@cmp: function
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
