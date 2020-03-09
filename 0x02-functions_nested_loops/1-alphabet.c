#include "holberton.h"
/**
 * print_alphabet - prints alphabet with _putchar
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
