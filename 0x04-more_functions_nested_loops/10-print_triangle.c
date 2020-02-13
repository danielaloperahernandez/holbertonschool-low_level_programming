#include "holberton.h"
/**
* print_triangle - function that prints a triangle
* @size: size of the triangle
* Description: function that prints a triangle, followed by a new line
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
