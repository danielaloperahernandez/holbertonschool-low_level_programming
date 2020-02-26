#include "holberton.h"
/**
* div - find out if the number has exact division between a number
* @n: number
* @d: divisor
* Return: natural square root of n
*/
int div(int n, int d)
{
	if (d * d == n)
		return (d);
	if (d * d > n)
		return (-1);
	return (div(n, d + 1));
}
#include "holberton.h"
/**
*_sqrt_recursion -  returns the natural square root of a number
*@n: number
*Return: natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (div(n, 1));
}
