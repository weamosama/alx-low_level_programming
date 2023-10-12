#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - Print arguments of various types
 *@format: A string
 *@...: The argument
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
		{
			printf("%s", separator);
			separator = ", ";
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
