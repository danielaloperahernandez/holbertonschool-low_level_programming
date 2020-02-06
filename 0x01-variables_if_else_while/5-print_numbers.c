#include <stdio.h>
/**
* main - main block
* print - prints digits from zero to nine
* Return: 0
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%i", digit);
	}
	putchar('\n');
	return (0);
}
