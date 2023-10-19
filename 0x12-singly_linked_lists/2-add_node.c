#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node - Adds a new node
 *@head: A pointer to a pointer to the head of the list.
 *@str: The string to be added
 *Return: The address
 */
list_t* add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
