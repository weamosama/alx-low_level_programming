#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - test
 * @src: char
 * @dest: char
 * Return: ttt
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int size;

	size = _strlen(src);

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i]
	}
	
	return (*dest);
}
