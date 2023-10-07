#include "main.h"
#include <stdlib.h>

/**
 *array_range - Create an array of integers from min to max
 *@min: The minimum value (inclusive)
 *@max: The maximum value (inclusive)
 *
 *Return: A pointe
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
