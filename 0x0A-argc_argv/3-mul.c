#include <stdlib.h>
#include <stdio.h>
/**
*main - multiply two numbers from command line
*@argc: number of arguments
*@argv: array of strings
*Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
