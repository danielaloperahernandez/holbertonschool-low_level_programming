#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
*main - sum over line arguments
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 if error
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
