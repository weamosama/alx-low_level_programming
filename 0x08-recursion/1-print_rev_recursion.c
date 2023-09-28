#include "main.h"
/**
 *_puts_rev_recursion - chr
 * @s: fff
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	_putchar('\n');
}
