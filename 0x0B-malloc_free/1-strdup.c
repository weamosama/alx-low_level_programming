#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup -test
 *@size: int
 *Return - test
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *duplicate = (char*) malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
