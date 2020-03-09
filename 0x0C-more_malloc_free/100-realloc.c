#include <stdio.h>
#include <stdlib.h>
/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: pointer to the memory previously allocated
*@old_size: size in bytes of the allocated space for ptr
*@new_size:  new size, in bytes of the new memory block
*Return: new allocate memory or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (ptr == NULL)
		return (new);
	old = ptr;
	for (i = 0; i < new_size && i < old_size; ++i)
		new[i] = old[i];
	free(ptr);
	return (new);
}
