#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at a specified index
 *@head: pointer to a pointer to the head
 *@index: the index of the node to be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (i == index - 1)
		{
			if (current->next == NULL)
				return (-1);
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1);
}
