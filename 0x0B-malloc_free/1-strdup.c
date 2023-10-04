#include "main.h"
#include <stdlib.h>

/**
 *strdup -test
 *@size: int
 *Return - test
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char*) malloc(size* sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
