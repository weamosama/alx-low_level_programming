#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - Concatenate two strings.
 *@s1: The first string.
 *@s2: The second string.
 *Return: A pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t len_s1, len_s2;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	concatenated = (char *) malloc(len_s1 + len_s2 + 1);

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
