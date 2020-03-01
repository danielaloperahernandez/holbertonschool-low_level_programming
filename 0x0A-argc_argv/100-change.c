#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*turned - print min turned
*@c: cents
*Return: 0
*/
int turned(int c)
{
	int turn = 0;
	int st[] = {25, 10, 5, 2, 1};
	int *p = st;

	while (p)
	{
		if (c / *p != 0)
		{
		turn += c / *p;
		c %= *p;
		}
		++p;
		if (c == 0)
			return (turn);
	}
	return (turn);
}
/**
*main - print all arguments to main
*@argc: number of args
*@argv: array of pointers to command line args
*Return: 0
*/
int main(int argc, char **argv)
{
	int cents;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(*++argv);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}
	printf("%d\n", turned(cents));
	return (0);
}
