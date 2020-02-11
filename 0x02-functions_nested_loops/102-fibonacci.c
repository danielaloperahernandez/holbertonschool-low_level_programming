#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0, print 50 Fibonacci numbers
 */
int main(void)
{
	long int a = 0, b = 1, c = 1;
	int i = 0;

	while (i <= 50)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;
		if (i < 50)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
