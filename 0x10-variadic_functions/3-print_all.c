#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - Prin
 *@format: A string
 *@...: The arguments
 */
void print_all(const char *const format, ...)
{
	va_list args;

	va_start(args, format);

	char *separator = "";
	int i = -1;
	char *str;

	while (format[++i])
	{
		while (i > 0 && format[i - 1] && (format[i - 1] == 'c' || format[i - 1] == 'i'
					|| format[i - 1] == 'f' || format[i - 1] == 's'))
		{
			printf("%s", separator);
			separator = ", ";
			break;
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
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		}
	}

	va_end(args);
	printf("\n");
}
