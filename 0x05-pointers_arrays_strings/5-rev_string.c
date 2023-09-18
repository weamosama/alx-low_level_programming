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

	size = _strlen(s);
	char resv[size];
	for (i = size - 1; i >= 0; i--)
	{
		resv[size - i] = s[i];
	}
		s=resv;
}
