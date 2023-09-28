#include "main.h"
/**
 *_sqrt_recursion - calculates the natural square root of a number
 *@n: the number to calculate the square root of
 *
 *Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (helper_sqrt(n, 2));
}

/**
 *helper_sqrt - a recursive helper
 *@n: the number to calculate the square root of
 *@j: the current guess for the square root
 *
 *Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper_sqrt(int n, int j)
{
	if (j * j == n)
		return (j);
	if (j * j > n)
		return (-1);
	return (helper_sqrt(n, i + 1));
}
