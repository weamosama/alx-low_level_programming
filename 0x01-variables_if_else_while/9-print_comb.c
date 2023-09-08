#include <stdio.h>
/**
 *main - entry
 *Return:0
*/
int main(void)
{
	char hex_digits[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i == 15)
		{
			putchar(hex_digits[i] + '0');
		}else{
			putchar(hex_digits[i] + ',');
		}
	}
	putchar('\n');

	return (0);
}
