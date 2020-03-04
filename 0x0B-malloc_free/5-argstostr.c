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
		{
			sz++;
		}
		sz++;
	}
	sz++;
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
	int i, j, k, len;

	if (ac == 0 || av == 0)
		return (NULL);
	len = size(ac, av);
	a = malloc(len * sizeof(char));
	if (a == NULL)
		return (NULL);
	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k + 1] = '\0';
	return (a);
}
