#include "main.h"
/**
 * _strncpy - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: test
 * Return: A pointer to the concatenated string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[j] = src[j];
	}
	if (j < n-1)
	{
		for (; j < n; j++)
			dest[j] = '\0';
	}
	dest[j] = '\0';
	return (dest);
}
