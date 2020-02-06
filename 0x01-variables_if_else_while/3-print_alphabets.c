#include <stdio.h>
/**
* main - main block
* print - prints the alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
	char low_alpha = 'a';

	while (low_alpha <= 'z')
	{
		putchar(low_alpha);
		low_alpha++;
	}
	low_alpha = 'A';
	while (low_alpha <= 'Z')
	{
		putchar(low_alpha);
		low_alpha++;
	}
	putchar('\n');
	return (0);
}
