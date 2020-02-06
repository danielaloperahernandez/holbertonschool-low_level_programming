#include <stdio.h>
/**
* main - main block
* print - prints digits from zero to nine without printf
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}
