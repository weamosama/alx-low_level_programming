#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - test
 * @a: tets
 * @n: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, fsum = 0, lsum = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ( i == j)
				fsum += a[i][j];
			if (j == n - 1 - i)
				lsum += a[i][j];
		}
		printf("%d, %d\n",fsum, lsum);
	}
}
