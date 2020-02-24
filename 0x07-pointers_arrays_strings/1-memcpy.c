#include "holberton.h"
/**
* _memcpy - function that copies memory area
* @dest: target array
* @src: array ti copy
* @n: n bytes from memory
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
