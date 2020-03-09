#include "holberton.h"
/**
*_memset - fills memory with a constant byte
* @s: array pointed
* @b: constant byte
* @n: bytes of the memory area pointed
* Return: s (array pointed)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
