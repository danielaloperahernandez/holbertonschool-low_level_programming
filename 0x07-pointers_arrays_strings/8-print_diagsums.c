#include "holberton.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j;

	for (i = 0; i < size; i++)
		sum1 += (a + i)[j];
	for (j = 0; j < size; j++)
	{
		sum2 += a(j + size - 1)[j];
		size--; 
	}
	printf("%d, %d\n", sum1, sum2);
}
