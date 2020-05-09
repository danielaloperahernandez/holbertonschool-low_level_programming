#include "holberton.h"
/**
 * _puts -  prints a string
 * @str: char type
 * Description: take string and print to standard output
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
