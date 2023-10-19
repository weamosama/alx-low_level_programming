#include <stdio.h>
#include "main.h"

/**
 *print_list - Prints.
 *@h: A pointer to the head
 *
 *Return: The number
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (size);
	}

	printf("[");

	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("nil");
		else
			printf("%s", h->str);

		h = h->next;

		if (h != NULL)
			printf(", ");
	}

	printf("]\n");

	return (size);
}
