#include "lists.h"

/**
 *print_list - Prints all the elements.
 *@h: A pointer to the head
 *
 *Return: The number
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	unsigned int i;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			for (i = 0; i < h->len; i++)
			{
				_putchar('n');
				_putchar('i');
				_putchar('l');
			}
		}
		else
		{
			for (i = 0; i < h->len; i++)
			{
				_putchar(h->str[i]);
			}
		}

		h = h->next;
		size++;
		_putchar('\n');
	}

	return size;
}
