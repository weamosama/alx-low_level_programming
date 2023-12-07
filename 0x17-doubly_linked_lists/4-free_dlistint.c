#include "lists.h"
#include <stdlib.h>

/**
 *free_dlistint - Frees a dlistint_t list.
 *@head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;

	/*Iterate through the list */
	while (current != NULL)
	{
		/*Save the next node before freeing the current one */
		next_node = current->next;

		/*Free the current node */
		free(current);

		/*Move to the next node */
		current = next_node;
	}
}
