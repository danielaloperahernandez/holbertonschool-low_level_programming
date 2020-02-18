#include "holberton.h"
/**
 * rev_string - reverses a string 
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int asc, len;
	char container;

	len = _strlen(s) - 1;
	asc = 0;
	while (asc <= len)
	{
		container = s[asc];
		s[asc] = s[len];
		s[len] = container;
		len--;
		asc++;
	}
}

