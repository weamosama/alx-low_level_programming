#include "lists.h"
#include <stdlib.h>

/**
 *free_list - Frees a list_t list.
 *@head: A pointer to the head
 */
void free_list(list_t *head)
{
	list_t * current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		if (current->str != NULL)
			free(current->str);

		free(current);
	}
}
