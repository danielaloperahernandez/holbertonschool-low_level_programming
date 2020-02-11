#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: star number
 * Return: print de sucession of numbers to 98
 */
void print_to_98(int n)
{

	while (n != 98)
	{
		if (n > 9 && n <= 99)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n >= 100)
		{
			_putchar((n / 100) + '0');
                        _putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
			_putchar(n + '0');
		_putchar(',');
		_putchar(' ');

	if (n > 98)
		n--;
	else
		n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
