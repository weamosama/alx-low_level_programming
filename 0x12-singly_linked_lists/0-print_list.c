#include "lists.h"
#include <stdio.h>
/**
 *print_list - Prints.
 *@h: A pointer to the head
 *
 *Return: The number
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	unsigned int i;

	if (h == NULL)
	{
		_putchar('[');
		_putchar('0' + 0);
		_putchar(']');
		_putchar(' ');
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		_putchar('\n');
		return (size);
	}
	_putchar('[');
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
		{
			_putchar('n');
			_putchar('i');
			_putchar('l');
		}
		else
		{
			for (i = 0; i < h->len; i++)
			{
				_putchar(h->str[i]);
			}
		}
		h = h->next;
		if (h != NULL)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(']');
	_putchar('\n');

	return (size);
}
