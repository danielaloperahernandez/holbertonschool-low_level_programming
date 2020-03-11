#include <stdlib.h>
#include "function_pointers.h"
/**
*int_index - function that searches for an integer
*@array: array to compare
*@size: size of the array
*@cmp: pointer to a function
*Return: index or -1 if it fails
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
	return (-1);
	for (i = 0; i < size; ++i)
	{
	if (cmp(array[i]))
		return (i);
	}
	return (-1);
}

