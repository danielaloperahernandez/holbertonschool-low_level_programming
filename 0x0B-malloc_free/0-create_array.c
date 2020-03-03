#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars, and initializes it with a specific char
*@size: required size
*@c: specific char
*Return: pointer to the array or null
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if size == 0
		return (NULL);
	a = (char *) malloc(size * sizeof(char))
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
