#include "holberton.h"
/**
* print_numbers - function that prints the numbers
* Description: function that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
