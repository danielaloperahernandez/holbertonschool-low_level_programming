#include "search_algos.h"

/**
 * jump_search - jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t slow = 0, fast = sqrt(size);

	if (!array)
		return (-1);

	while (slow < size && array[slow] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", slow, array[slow]);
		slow += fast;
	}

	fast = slow - fast;
	printf("Value found between indexes [%lu] and [%lu]\n", fast, slow);
	slow = slow >= size ? size - 1 : slow;
	while (fast <= slow)
	{
		printf("Value checked array[%lu] = [%d]\n", fast, array[fast]);
		if (array[fast] == value)
			return (fast);
		fast++;
	}
	return (-1);
}
