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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	char *concatenated = (char*) malloc(len_s1 + len_s2 + 1);

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	_strcat(concatenated, s2);

	return (concatenated);
}
