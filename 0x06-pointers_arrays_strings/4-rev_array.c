#include "holberton.h"
/**
* reverse_array - reverses the content of an array of integers.
* @a: pointer array
* @n: no to reverse
* Description: reverse content
*/
void reverse_array(int *a, int n)
{
	int asc = 0;
	int container;

	while (asc < n)
	{
		container = a[asc];
		a[asc] = a[n - 1];
		a[n - 1] = container;
		n--;
		asc++;
	}
}

