#include "main.h"
/**
 * print_array - test
 * @a: char
 * @n: k
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar(a[i]);
		if (i != n-1)
			_putchar(', ');
	}
		_putchar('\n');
}
