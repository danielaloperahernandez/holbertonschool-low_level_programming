#include <stdio.h>
#include <stdlib.h>
/**
*array_range -  function that creates an array of integers.
*@min: min value
*@max: max value
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
