#include <stdio.h>
/**
* main - main block
* print - prints the numbers from 00 to 99
* Return: 0
*/
int main(void)
{
	int n;
	int first;
	int second;

	for (n = 0; n <= 99; n++)
	{
		first = n / 10;
		second = n % 10;
		putchar(first + '0');
		putchar(second + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
