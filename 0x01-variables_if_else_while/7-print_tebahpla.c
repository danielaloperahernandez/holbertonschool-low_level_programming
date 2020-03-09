#include <stdio.h>
/**
* main - main block
* print - prints the alphabet in lowercase in reverse
* Return: 0
*/
int main(void)
{
	char low_alpha = 'z';

	while (low_alpha >= 'a')
	{
		putchar(low_alpha);
		low_alpha--;
	}
	putchar('\n');
	return (0);
}
