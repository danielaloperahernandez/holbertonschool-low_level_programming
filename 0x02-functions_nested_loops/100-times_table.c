#include "holberton.h"
/**
 * print_times_table - function that prints the n times table
 * @n: integer, times table
 * Return: print n times table
 */
void print_times_table(int n)
{
	int row, column;

	if (n < 15 && n > 0)
	{
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
		if (column != 0)
		{
			if ((row * column) <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar((row * column) + '0');
			}
			else if ((row * column) <= 99)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(((row * column) / 10) + '0');
			_putchar(((row * column) % 10) + '0');
			}
			else if ((row * column) <= 999)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(((row * column) / 100) + '0');
			_putchar((((row * column) / 10) % 10) + '0');
			_putchar(((row * column) % 10) + '0');
			}
		}
		else
			_putchar((row * column) + '0');
		}
		_putchar('\n');
	}
	}
}
