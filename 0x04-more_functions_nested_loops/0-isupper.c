#include "holberton.h"
/**
* _isupper - checks for uppercase character.
* @c: caracter to check
* Return: 1 if uppercase, in other case 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
