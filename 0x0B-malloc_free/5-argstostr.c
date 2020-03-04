#include <stdio.h>
#include <stdlib.h>
/**
*size - obtain the size of an array of 2 dimensions
*@c: number of arguments
*@v: array of pointers to strings
*Return: size of an array
*/
int size(int c, char **v)
{
	int rec1, rec2, sz = 0;

	for (rec1 = 0; rec1 < c; rec1++)
	{
		for (rec2 = 0; v[rec1][rec2]; rec2++)
			sz++;
		sz++;/*space for newline*/
	}
	sz++;/*space for string terminator*/
	return (sz);
}
/**
*argstostr - concatenates all the arguments of your program
*@ac: number of arguments
*@av: array of pointers to strings
*Return: pointer to a new string or NULL
*/
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k, len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	len = size(ac, av);
	a = (char *) malloc(len * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 1, k = 0; i < ac; ++i, ++k)
	{
		for (j = 0; av[i][j]; ++j, ++k)
			a[k] = av[i][j];
		a[k] = '\n';
	}
	a[k + 1] = '\0';
	return (a);
}
