#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data
 *@head: pointer to the head
 *Return: the sum of all data values
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
