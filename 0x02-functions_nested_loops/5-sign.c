#include "holberton.h"
/**
 * print_sign - main function
 *
 * @num: number to compare
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 *
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
