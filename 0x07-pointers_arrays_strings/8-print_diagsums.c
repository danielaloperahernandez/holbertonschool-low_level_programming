#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums -  sets the value of a pointer to a char.
*@a: string
*@size: size
*Description: print diagonal sum
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j, p;

	for (i = 0; i < size; i++)
		sum1 += (a + i)[j];
	for (j = 0; j < size; j++)
	{
		p = j + size - 1;
		sum2 += (a + p)[j];
		size--;
	}
	printf("%d, %d\n", sum1, sum2);
}
