#include <stdio.h>
/**
 *main - entry
 *Return:0
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');

	return (0);
}
