#include "main.h"
/**
 * _memset - test
 * @s: char
 * @b: char
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = n; i >= 0;i--)
	{
		s[i] = b;
	}
	return (s);
}
