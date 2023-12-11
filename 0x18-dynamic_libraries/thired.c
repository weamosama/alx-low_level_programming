#include "main.h"

/**
 *_strcpy - copies a string
 *@dest: The destination buffer
 *@src: The source string to be copied
 *
 *Return: A pointer to the destination buffer (placeholder return value)
 */
char *_strcpy(char *dest, char *src)
{
	printf("%s", src);
	return (dest);
}

/**
 *_atoi - converts a string to an integer
 *@s: The string to be converted
 *
 *Return: Always 0 (placeholder return value)
 */
int _atoi(char *s)
{
	printf("%s ", s);
	return (0);
}

/**
 *_strcat - concatenates two strings
 *@dest: The destination string
 *@src: The source string to be concatenated
 *
 *Return: A pointer to the destination string (placeholder return value)
 */
char *_strcat(char *dest, char *src)
{
	printf("%s", src);
	return (dest);
}

/**
 *_strncat - concatenates n characters of two strings
 *@dest: The destination string
 *@src: The source string to be concatenated
 *@n: The maximum number of characters to concatenate
 *
 *Return: A pointer to the destination string (placeholder return value)
 */
char *_strncat(char *dest, char *src, int n)
{
	printf("%s %d", src, n);
	return (dest);
}

/**
 *_strncpy - copies up to n characters of a string
 *@dest: The destination buffer
 *@src: The source string to be copied
 *@n: The maximum number of characters to copy
 *
 *Return: A pointer to the destination buffer (placeholder return value)
 */
char *_strncpy(char *dest, char *src, int n)
{
	printf("%s %d", src, n);
	return (dest);
}
