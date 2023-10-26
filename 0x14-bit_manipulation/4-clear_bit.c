#include "main.h"

/**
 *clear_bit - Clears the value of a bit to 0
 *@n: A pointer to the number
 *@index: The index of the bit to clear
 *
 *Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~(1 << index));
	return (1);
}
