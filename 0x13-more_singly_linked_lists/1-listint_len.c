#include <stddef.h>
#include "lists.h"

/**
 *listint_len - returns the number of elements
 *@h: pointer to the head
 *Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
