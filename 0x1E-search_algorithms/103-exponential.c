#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *a = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", a[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (a[i] == value)
			return ((a - array) + i);
		else if (a[i] > value)
			size = i;
		else
		{
			a += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}

/**
 * exponential_search - performs linear search
 * @array: the integer arrayay
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, new_sz = 0;
	int ret;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	new_sz = (bound >= size ? size : bound + 1) - (bound / 2);
	bound /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n",
			bound, bound * 2 >= size ? size - 1 : bound * 2);
	ret = binary_search(array + bound, new_sz, value);
	return (ret == -1 ? ret : ret + (int)bound);
}
