#include "holberton.h"
/**
 * puts_half - prints the second half of a string
 * @str: string to print half
 * Return: print half of a string
 */

void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (i % 2 != 0)
		i = (i - 1) / 2;
	else
		i = i / 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
