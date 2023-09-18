#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - test
 * @str: char
 */
void puts_half(char *str)
{
	int i;

	int size;

	size = _strlen(str);
	
	if (size % 2 !=0)
	{
		size = (size - 1) / 2;
	}else{
		size = size / 2;
	}

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
