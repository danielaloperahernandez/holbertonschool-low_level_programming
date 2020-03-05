#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array
*@nmemb: number of objects
*@size: size
*Return: pointer to the allocated memory or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); ++i)
		p[i] = 0;
	return (p);
}
