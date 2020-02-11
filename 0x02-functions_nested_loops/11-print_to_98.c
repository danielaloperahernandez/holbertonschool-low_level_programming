#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: star number
 * Return: print de sucession of numbers to 98
 */
void print_to_98(int n)
{
	while (n != 98)
		printf("%i, ", (n > 98 ? n-- : n++));
	printf("98\n");
}
