#include <stdio.h>
/**
* main - program that finds and prints the largest prime factor
* Description - finds and prints the largest prime factor 612852475143
* Return: 0
*/
int main(void)
{
	long number;
	long div;
	long n;

	number = n = 612852475143;

	for (div = 2; div < number; div++)
	{
		if (number % div == 0)
			number /= div;
		if (n / number == 2)
			break;
	}
	printf("%li\n", number);
	return (0);
}
