#include "search_algos.h"

/**
 * interpolation_search - performs linear search
 * @array: the integer arrayay
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
