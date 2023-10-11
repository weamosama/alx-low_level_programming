#include "main.h"
#include <stdio.h>

/**
 *print_name - Prints a name using a custom printing function.
 *@name: The name to be printed.
 *@f: A pointer to a functio
 */
void print_name(char *name, void(*f)(char*))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

/**
 *print - A printing function.
 *@name: The name to be printed
 */
void print(char *name)
{
	if (name != NULL)
	{
		printf("Name: %s\n", name);
	}
}
