#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node
 *@head: pointer to a pointer to the head
 *
 *Return: the data (n) of the deleted head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	data = 0;
	if (*head != NULL)
	{
		current = *head;
		data = current->n;
		*head = (*head)->next;
		free(current);
	}

	return (data);
}
