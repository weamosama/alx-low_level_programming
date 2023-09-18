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

	int half;

	size = _strlen(str);
	
	if (size % 2 !=0)
	{
		half = (size - 1) / 2;
	}else{
		half = size / 2;
	}

	for (i = half; i < size; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
