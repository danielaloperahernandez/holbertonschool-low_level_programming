#include "holberton.h"
/**
* _isdigit - checks for a digit
* @c: digit to check
* Return: 1 if digit, in other case 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
