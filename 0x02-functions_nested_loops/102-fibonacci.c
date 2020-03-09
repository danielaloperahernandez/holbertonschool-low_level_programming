#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0, print 50 Fibonacci numbers
 */
int main(void)
{
	long int a = 0, b = 1, c = 0;
	int i = 0;

	while (i <= 49)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;
		if (i < 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
