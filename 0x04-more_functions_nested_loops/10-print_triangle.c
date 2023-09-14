#include "main.h"
/**
 * print_triangle -print_numbers
 * @n: int
 *
 */
void print_triangle(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n; j > 0; j--)
			{
				if (j > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
