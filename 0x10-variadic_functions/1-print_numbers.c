#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers
*@separator: number separator
*@n: number of parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c = n;
	va_list ap;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	while (c--)
	{
		printf("%d", va_arg(ap, int));
		if (c != 0)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
