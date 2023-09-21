#include "main.h"
/**
 *cap_string - Capitalize all words in a string.
 *@str: Pointer to the input string.
 *Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	int new_word;

	new_word = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}

		i++;
	}

	return (str);
}
