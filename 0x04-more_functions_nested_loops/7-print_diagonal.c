#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: lines to print
* Description: draws a diagonal line on the terminal
*/
void print_diagonal(int n)
{
	int i, l;

	i = 0;
	while (i < n)
	{
		for (l = 0; l < i; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar ('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
