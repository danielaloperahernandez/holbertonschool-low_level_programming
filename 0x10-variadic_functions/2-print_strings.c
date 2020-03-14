#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings -  prints strings, followed by a new line
*@separator: string separator
*@n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c = n;
	va_list ap;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	while (c--)
	{
		s = va_arg(ap, char *);
		printf("%s", s ? s : "(nil)");
		if (c != 0)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
