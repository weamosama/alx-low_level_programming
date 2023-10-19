#include "lists.h"

/**
 *free_list - Frees a list_t list.
 *@head: A pointer to the head
 */
void free_list(list_t *head)
{
	list_t *item;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		item = head;

		if (item->str != NULL)
			free(item->str);
		free(item);
		head = head->next;
	}
}
