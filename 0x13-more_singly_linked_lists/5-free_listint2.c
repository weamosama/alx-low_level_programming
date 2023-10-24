#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - frees a listint_t
 *@head: pointer to a pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t * current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
