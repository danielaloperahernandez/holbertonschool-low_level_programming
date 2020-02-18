#include "holberton.h"
/**
 * _strlen - return length of a string
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
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

