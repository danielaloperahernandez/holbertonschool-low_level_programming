#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int type
 * @b: int type
 * Return: Return swapped values
*/

void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;
}

