#include "holberton.h"
/**
 * print_rev - change the values of ints
 * @s: char type
 * Description: take string and print to standard output
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

