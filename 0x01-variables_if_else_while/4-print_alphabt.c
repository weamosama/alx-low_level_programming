#include <stdio.h>
/**
 *main - entry
 *Return:0
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter !="q" && letter !="c")
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
