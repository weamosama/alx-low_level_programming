#include <stdio.h>
/**
 *main - entry
 *Return:0
*/
int main(void)
{
	int i;

	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
