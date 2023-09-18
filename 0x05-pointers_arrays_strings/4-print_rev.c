#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - test
 * @s: char
 */
void print_rev(char *s)
{
	int i;

	int size;

	size = _strlen(*s);

	for (i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
