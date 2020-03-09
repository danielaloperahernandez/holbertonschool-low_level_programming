#include "holberton.h"
/**
 * _islower - function that checks for lowercase character
 * @c: the character to check
 * Return: if c is a lowercase 1, in other case 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
