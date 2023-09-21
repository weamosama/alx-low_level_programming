#include "main.h"
/**
 * leet - Encode a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *leet_chars;

	leet_chars = "aAeEoOtTlL";
	char *leet_codes;

	leet_codes = "4433007711";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_codes[j];
				break; /* Exit the inner loop once a match is found */
			}
		}
	}

	return (str);
}

