#include "lists.h"

/**
 *print_list - Prints all the elements.
 *@h: A pointer to the head
 *
 *Return: The number
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int i;

	while (h != NULL)
	{
		_putchar('[');
		if (h->str == NULL)
			_putchar('0');
		else
		{
			size_t len = h->len;
		       	i = 0;

			while (len > 0)
			{
				_putchar((len % 10) + '0');
				len /= 10;
				i++;
			}
		}
		_putchar(']');
		_putchar(' ');
		if (h->str == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			for (i = 0; i < h->len; i++)
				_putchar(h->str[i]);
		}
		h = h->next;
		count++;
		_putchar('\n');
	}
	return (count);
}
