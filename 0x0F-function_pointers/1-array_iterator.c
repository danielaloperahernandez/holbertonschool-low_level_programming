#include <stdlib.h>
#include "function_pointers.h"
/**
*array_iterator - executes a function given as a parameter
*				on each element of an array.
*@array: array to range
*@size: size of an array in bytes
*@action: pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		exit(1);
	for (i = 0; i < size; ++i)
		action(array[i]);
}
