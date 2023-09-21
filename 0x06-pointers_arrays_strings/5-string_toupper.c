/**
 *string_toupper - Convert all lowercase letters in a string to uppercase.
 *@str: Pointer to the input string.
 *Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	if (str == NULL)
		return NULL;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// Convert lowercase letter to uppercase by adjusting the ASCII value
			str[i] = str[i] - ('a' - 'A');
		}
	}

	return str;
}
