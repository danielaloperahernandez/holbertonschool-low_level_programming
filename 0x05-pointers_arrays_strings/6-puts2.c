#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: char array string type
 * Description: Print 1st char, 2st char, etc..
 */

void puts2(char *str)
{
	int pos;

	for (pos = 0; str[pos] != '\0'; pos++)
	{
		if (pos % 2 == 0)
			_putchar(str[pos]);
	}
	_putchar('\n');
}

