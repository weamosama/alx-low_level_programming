#include "lists.h"
#include <stdlib.h>

/**
 *free_list - Frees a list_t list.
 *@head: A pointer to the head
 */
void free_list(list_t *head)
{
	list_t *item;

	while (head != NULL)
	{
		item = head;
		head = head->next;

		if (item->str != NULL)
		{
			free(item->str);
			free(item);
		}
	}
}
