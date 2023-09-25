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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	if (s[i] == accept[j])
		return (s + i);
	return (Null);
}
