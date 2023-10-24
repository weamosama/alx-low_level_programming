#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node
 *@head: pointer to the head
 *@index: the index
 *Return: a pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
