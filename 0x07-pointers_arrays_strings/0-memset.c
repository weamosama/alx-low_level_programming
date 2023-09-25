#include "main.h"
/**
 * _memset - test
 * @s: char
 * @b: char
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = n; i >= 0; i--)
	{
		s[i] = b;
	}
	return (s);
}
