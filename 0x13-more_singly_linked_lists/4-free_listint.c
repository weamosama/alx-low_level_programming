#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - frees
 *@head: pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
