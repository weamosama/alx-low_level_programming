#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - prints
 *@format: list
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str;
	char *ptr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ptr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ptr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ptr, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ptr, str);
					break;
				default:
					i++;
					continue;
			}

			ptr = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
