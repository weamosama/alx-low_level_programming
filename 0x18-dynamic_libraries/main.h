#ifndef MYHEADER_H
#define MYHEADER_H
#include <stdlib.h>
/* _putchar - writes a character to the standard output */
int _putchar(char c);

/* _islower - checks for lowercase character */
int _islower(int c);

/* _isalpha - checks for alphabetic character */
int _isalpha(int c);

/* _abs - computes the absolute value of an integer */
int _abs(int n);

/* _isupper - checks for uppercase character */
int _isupper(int c);

/* _isdigit - checks for a digit (0 through 9) */
int _isdigit(int c);

/* _strlen - calculates the length of a string */
int _strlen(char *s);

/* _puts - writes a string to the standard output */
void _puts(char *s);

/* _strcpy - copies a string */
char *_strcpy(char *dest, char *src);

/* _atoi - converts a string to an integer */
int _atoi(char *s);

/* _strcat - concatenates two strings */
char *_strcat(char *dest, char *src);

/* _strncat - concatenates n characters of two strings */
char *_strncat(char *dest, char *src, int n);

/* _strncpy - copies up to n characters of a string */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - compares two strings */
int _strcmp(char *s1, char *s2);

/* _memset - fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* _memcpy - copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* _strchr - locates a character in a string */
char *_strchr(char *s, char c);

/* _strspn - gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* _strpbrk - searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* _strstr - locates a substring */
char *_strstr(char *haystack, char *needle);

#endif /* MYHEADER_H */
