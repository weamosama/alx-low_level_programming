#include "main.h"
/**
 *string_toupper - Convert all lowercase letters in a string to uppercase.
 *@str: Pointer to the input string.
 *Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
