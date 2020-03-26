#include "holberton.h"
/**
*print_recursion - prints the binary representation of n
*@n: number to print in binary
*/
void print_recursion(unsigned long int n)
{
	if (n == 0)
		return;
	print_recursion(n >> 1);
	_putchar((n & 1) + '0');
}
/**
*print_binary - prints the binary representation of n
*@n: number to print in binary
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_recursion(n);
}
