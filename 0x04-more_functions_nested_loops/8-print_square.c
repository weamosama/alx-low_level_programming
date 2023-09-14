#include "main.h"
/**
 * print_square -print_numbers
 * @n: int
 *
 */
void print_square(int n)
{
	int i;

	int j;

	for (i = n; i > 0; i--)
	{
		for(j = n; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
