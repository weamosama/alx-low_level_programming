#include "main.h"
/**
 * _stract -test
 * @dest: r
 * @src: f
 * Return: char
 *
 */
char *_strcat(char *dest, char *src)
{  
       int i;
	
       int destSize;
	
       int srcSize;

	for (i = 0; dest[i] != '\0'; i++)
		destSize++;
	for (srcSize = 0; src[srcSize] != '\0'; srcSize++)
		dest[destSize + srcSize] = src[srcSize];
	dest[destSize + srcSize] = '\0';
	return (dest);
}
