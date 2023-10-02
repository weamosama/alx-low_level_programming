#include "main.h"
/**
 * _strncat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: test
 * Return: A pointer to the concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
