#include "main.h"
#include <stdio.h>
/**
 * _strspn - test
 * @s: char
 * @accept: char
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{	
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	
	return (count);
}
