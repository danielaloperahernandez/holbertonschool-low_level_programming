#include <stdio.h>
/**
* main - main block
* print - prints the alphabet in lowercase and uppercase minus e and q
* Return: 0
*/
int main(void)
{
	char low_alpha = 'a';

	while (low_alpha <= 'z')
	{
		if (low_alpha == 'q' || low_alpha == 'e')
		{
			low_alpha++;
		}
		else
		{
			putchar(low_alpha);
			low_alpha++;
		}
	}
	putchar('\n');
	return (0);
}
