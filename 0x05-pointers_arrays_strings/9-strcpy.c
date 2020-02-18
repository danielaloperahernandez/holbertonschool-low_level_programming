#include "holberton.h"
/**
 *_strcpy - make
 *@dest: make
 *@src: make
 * Return: return the value dest
 */

char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
	dest[cont] = '\0';
	return (dest);
}

