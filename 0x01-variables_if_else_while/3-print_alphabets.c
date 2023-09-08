#include <stdio.h>

/**
 *main - entry
 *Return:0
*/
int main(void)
{
	char letter = 'a';
	char uppercase = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
