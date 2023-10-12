#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - Print
 *@format: A string containing format specifiers
 *@...: The arguments to be printed
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
		if (i > 0 && (format[i - 1] == 'c' || format[i - 1] == 'i' || format[i - 1] == 'f' || format[i - 1] == 's'))
		{
			printf("%s", separator);
			separator = ", ";
		}

		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", (float) va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
		}
	}

	va_end(args);
	printf("\n");
}
