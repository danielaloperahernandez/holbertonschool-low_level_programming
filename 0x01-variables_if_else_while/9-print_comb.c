#include <stdio.h>
/**
* main - main block
* print - prints all possible combinations of single-digit numbers
* Return: 0
*/
int main(void)
{
	int combin;

	while (combin < 10)
	{
		putchar(combin + '0');
		if (combin < 9)
		{
			putchar (',');
			putchar (' ');
		}
		combin++;
	}
	putchar('\n');
	return (0);
}
