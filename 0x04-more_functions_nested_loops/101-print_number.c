#include "holberton.h"
/**
* print_number - function that prints an integer
* @n: integer to print
* Descriptions: prints digit with _putchar
*/
void print_number(int n)
{
	int len, powten, i, digit, num;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powten = 1;
		for (i = 1; i <= len - 1; i++)
		{
			powten *= 10;
		}
		for (i = 1; i <= len; i++)
		{
			digit = n / powten;
			_putchar(digit + 48);
			n -= digit * powten;
			powten /= 10;
		}
	}
	else	
		_putchar(n + '0');
}
