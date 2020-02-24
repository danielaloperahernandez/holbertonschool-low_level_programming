#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - sets the value of a pointer to a char.
*@a: string
*@size: size
*Description: print diagonal sum
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j;

	for (i = 0; i < size; ++i)
		sum1 += (a + i * size)[i];
	for (j = 0; j < size; ++j)
		sum2 += (a + j * size)[--i];
	printf("%d, %d\n", sum1, sum2);
}
