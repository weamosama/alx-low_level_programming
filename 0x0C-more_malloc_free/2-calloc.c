#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocate memory for an array and set it to zero
 *@nmemb: Number of elements in the array
 *@size: Size of each element in bytes
 *
 *Return: A pointer to the allocated memor
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointr = malloc(nmemb * size);

	if (pointr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *) pointr + i) = 0;

	return (pointr);

}
