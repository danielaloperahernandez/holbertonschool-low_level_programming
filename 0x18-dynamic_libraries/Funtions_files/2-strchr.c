#include "holberton.h"
/**
* _strchr - function that locates a character in a string
* @s: string
* @c: character to find
* Return: s
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
