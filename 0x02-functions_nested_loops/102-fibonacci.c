#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0, print 50 Fibonacci numbers
 */
int main(void)
{
	long int a = 0, b = 1, c = 1;
	int i;

	for (i = 0; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld", c);
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
