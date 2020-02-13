#include "holberton.h"
/**
* more_numbers - function that prints 10 times the numbers
* Description: function that prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int i, f;

	f = 0;
	while (f < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			 i++;
		}
		f++;
		_putchar('\n');
	}
}
