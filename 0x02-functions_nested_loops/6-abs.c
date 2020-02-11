#include "holberton.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: Number to compute
 * Return: n* -1 if the number is negative, en other cases return n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
