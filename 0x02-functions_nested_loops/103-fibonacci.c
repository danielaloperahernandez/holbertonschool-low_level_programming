#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 * Return: Always 0, print 50 Fibonacci numbers
 */
int main(void)
{
	long int a = 0, b = 1, c = 1, sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
	if (c % 2 == 0)
	{
		sum += c;
	}
	}
	printf("%li\n", sum);
	return (0);
}
