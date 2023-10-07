#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatenate two strings with a limit
 *@s1: The first string
 *@s2: The second string
 *@n: The maximum number of bytes from s2 to concatenate
 *
 *Return: A pointer to a newly allocated space in
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *memory;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	memory = malloc(sizeof(char) * (len1 + n + 1));

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		memory[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		memory[i] = s2[j];

	memory[i] = '\0';

	return (memory);
}
