#include "main.h"
/**
 *_strlen_recursion - chr
 * @s: fff
 * Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
