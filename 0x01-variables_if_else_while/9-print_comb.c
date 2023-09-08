#include <stdio.h>
/**
 *main - entry
 *Return:0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			putchar('0' + i + ',');
			putchar(' ');
		}else
		{
			putchar('0'+ i);
		}
	}
	putchar('\n');

	return (0);
}
