#include <stdarg.h>
/**
*sum_them_all - returns the sum of all its parameters
*@n: number of parameters
*Return: sum of n parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c = n;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (c--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
