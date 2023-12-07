#include "lists.h"
#include <stdlib.h>

/**
 *insert_dnodeint_at_index - Inserts a new node at a given position.
 *@h: Pointer to the pointer to the head of the list.
 *@idx: Index of the list where the new node should be added (starting from 0).
 *@n: Value to be stored in the new node.
 *
 *Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/*Traverse the list until reaching the desired index or end of the list */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/*If the index is out of bounds, do not add the new node */
	if (current == NULL)
		return (NULL);

	/*Create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*Set the values for the new node */
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	/*Update pointers to insert the new node at the desired position */
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
