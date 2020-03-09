#include "holberton.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int letter, times;

	for (times = 1; times <= 10; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
