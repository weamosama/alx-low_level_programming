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
			putchar(i + ', ');
		}else
		{
			putchar(i + '0');
		}
	}
	putchar('\n');

	return (0);
}
