#include "main.h"
/**
 *is_divisible - checks if n is divisible by a divisor
 *@n: the number to check
 *@divisor: the current divisor being checked
 *
 *Return: 1 if n is divisible by divisor, 0 otherwise
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	else if (n % divisor == 0)
		return (1);
	return (is_divisible(n, divisor - 1));
}

/**
 *is_prime_number - checks if a number is prime recursively
 *@n: the number to check
 *
 *Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (!is_divisible(n, n - 1));
}
