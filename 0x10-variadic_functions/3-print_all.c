#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_all - write a function that prints anything
*@format: format string
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, format);

	while (format && format[i])
	{
		while (format[i])
		{
			switch (format[i++])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					continue;
			}
			if (format[i])
				printf(", ");
		}
	}
	putchar('\n');
	va_end(ap);
}
