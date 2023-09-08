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
		char s = i==15?' ':',';
		putchar(hex_digits[i] + s);
	}
	putchar('\n');

	return (0);
}
