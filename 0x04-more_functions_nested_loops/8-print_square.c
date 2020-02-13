#include "holberton.h"
/**
* print_square - prints a square
* @size: size of a square
* Description: prints a square with #
*/
void print_square(int size)
{
	int w, h;

	for (h = 0; h < size; h++)
	{
		for (w  = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
