#include <stdio.h>
/**
*main - print name of program followed by new line
*@argc: number of arguments to program
*@argv: array of pointers to each command line argument
*Return: 0
*/
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%i\n", argc - 1);
	return (0);
}
