#include "holberton.h"
/**
*_strncpy - concatenates two strings
* @dest: string pointer
* @src: string pointer
* @n: bytes
* Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
