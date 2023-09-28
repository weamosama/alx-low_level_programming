#include "main.h"
/**
 *factorial - chr
 * @n: fff
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
