#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - test
 * @str: char
 */
void puts2(char *str)
{
	int i;

	int size;

	size = _strlen(str);

	for (i = 0; i < size; i++)
	{
		if (str[i] == '\0')
			break;
		if (i % 2 == 0)
			_putchar(str[i]);
	}
		_putchar('\n');
}
