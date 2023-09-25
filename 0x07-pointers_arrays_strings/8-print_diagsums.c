#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - test
 * @a: tets
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, fsum = 0, lsum = 0, n;

	n = size;
	for (i = 0; i < n; i++)
	{
		fsum += a[i * n + i];
		lsum += a[i * n + (n - 1 - i)];
	}
	printf("%d, %d\n",fsum, lsum);	
}
