#include "main.h"
#include <stdio.h>
/**
 * _strstr - test
 * @haystack: tets
 * @needle: char
 * Return: int
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found = 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		found = 1;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != noodle[j])
			{
				found = 0;
				break;
			}
			
		}
		if (found == 1)
			return (haystack + i);
	}
	return (NULL);
}
