#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: The first string
 *@s2: The second string
 *
 *Return: Always 0 (placeholder return value)
 */
int _strcmp(char *s1, char *s2)
{
	printf("%s %s", s1, s2);
	return (0);
}

/**
 *_memset - fills memory with a constant byte
 *@s: The memory area to be filled
 *@b: The byte to fill the memory area with
 *@n: The number of bytes to fill
 *
 *Return: A pointer to the memory area (placeholder return value)
 */
char *_memset(char *s, char b, unsigned int n)
{
	printf("%d %d", b, n);
	return (s);
}

/**
 *_memcpy - copies memory area
 *@dest: The destination memory area
 *@src: The source memory area
 *@n: The number of bytes to copy
 *
 *Return: A pointer to the destination memory area (placeholder return value)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	printf("%s %d", src, n);
	return (dest);
}

/**
 *_strchr - locates a character in a string
 *@s: The string to be searched
 *@c: The character to locate
 *
 *Return: NULL (placeholder return value)
 */
char *_strchr(char *s, char c)
{
	printf("%s %d", s, c);
	return (NULL);
}
