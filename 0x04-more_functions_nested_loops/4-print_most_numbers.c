#include "main.h"
/**
 * print_most_numbers - print_numbers
 * Return: bool
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if(i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
