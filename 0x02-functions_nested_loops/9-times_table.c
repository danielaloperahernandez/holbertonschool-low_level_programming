#include "holberton.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: return the 9 times table
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			if ((row * column) > 9)
			{
				_putchar((row * column) / 10 + '0');
				_putchar((row * column) % 10 + '0');
			}
			else if (column != 0)
			{
				_putchar(' ');
				_putchar((row * column) + '0');
			}
			else
				_putchar((column * row) + '0');
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
