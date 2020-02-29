#include <stdio.h>
/**
*main - print all arguments to main
*@argc: number of args
*@argv: array of pointers to command line args
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
