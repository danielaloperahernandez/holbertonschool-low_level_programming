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
