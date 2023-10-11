#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - Executes a function on each element of an array.
 *@array: The array to operate on.
 *@size: The size of the array.
 *@action: A pointer to the function to be executed on ea
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
