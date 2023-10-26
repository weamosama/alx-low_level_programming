#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - Converts a binary to int
 *@b: A pointer to a string
 *Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b == '0' || *b == '1')
		{
			result = result *2 + (*b - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
