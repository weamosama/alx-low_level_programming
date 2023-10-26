#include "main.h"

/**
 *flip_bits - Returns the number of bitsmove from n to m.
 *@n: The first ofset.
 *@m: The second offset.
 *
 *Return: The number of bits to move to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	count = 0;
	while (xor_result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
