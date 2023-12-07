#include "lists.h"
#include <stdlib.h>

/**
 *delete_dnodeint_at_index - Deletes the node at inde.
 *@head: Pointer to the pointer to the head of the list.
 *@index: Index of the node to be deleted (starting from 0).
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1); /*List is empty */

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/*Traverse the list until reaching the desired index or end of the list */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	/*If the index is out of bounds, do not delete any node */
	if (current == NULL)
		return (-1);

	/*Update pointers to remove the node at the desired position */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	/*Free the memory of the deleted node */
	free(current);

	return (1);
}
